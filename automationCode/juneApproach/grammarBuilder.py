import re
import sys
from collections import deque

TOKEN_REGEX = re.compile(r"<(?P<token>\w+)>: (?P<regex>.+)")
FUNC_CALL_REGEX = re.compile(r'(\w+)\s*\(')
FUNC_DEF_REGEX = re.compile(r'\w[\w\s\*]*\s+(\w+)\s*\(.*\)\s*{')

# To detect control structures including inline (if without braces)
CONTROL_START_REGEX = re.compile(r'\b(if|else if|else|for|while|switch)\b')
INLINE_CONTROL_REGEX = re.compile(r'\b(if|else if|else|for|while|switch)\b(.*)')

class CodeBlock:
    def __init__(self, type_, name=None, content=None, children=None):
        self.type = type_
        self.name = name
        self.content = content or []
        self.children = children or []

    def __repr__(self, indent=0):
        pad = '  ' * indent
        name_str = f" ({self.name})" if self.name else ""
        repr_str = f"{pad}{self.type}{name_str}:\n"
        for line in self.content:
            repr_str += f"{pad}  {line}\n"
        for child in self.children:
            repr_str += child.__repr__(indent + 1)
        return repr_str

class GrammarExtractor:
    def __init__(self, lex_file, source_file):
        self.lex_file = lex_file
        self.source_file = source_file
        self.tokens = {}    # token_name -> regex pattern
        self.functions = {} # func_name -> list of lines
        self.visited = set()
        self.grammar_tree = None

    def load_tokens(self):
        with open(self.lex_file) as f:
            for line in f:
                match = TOKEN_REGEX.match(line.strip())
                if match:
                    token, regex = match.group('token'), match.group('regex')
                    self.tokens[token] = regex
        print(f"[DEBUG] Loaded tokens: {list(self.tokens.keys())}")

    def extract_functions(self, lines):
        current_func = None
        buffer = []
        brace_count = 0

        for line in lines:
            # Detect function definitions by regex
            if match := FUNC_DEF_REGEX.match(line):
                # Save previous function buffer if any
                if current_func:
                    self.functions[current_func] = buffer
                current_func = match.group(1)
                buffer = [line]
                brace_count = line.count('{') - line.count('}')
            elif current_func:
                buffer.append(line)
                brace_count += line.count('{') - line.count('}')
                if brace_count == 0:
                    self.functions[current_func] = buffer
                    current_func = None
                    buffer = []

        # Save last function if file ends without reset
        if current_func:
            self.functions[current_func] = buffer

        print(f"[DEBUG] Extracted functions: {list(self.functions.keys())}")

    def parse_code(self, func_name):
        if func_name in self.visited or func_name not in self.functions:
            return None

        self.visited.add(func_name)
        lines = self.functions[func_name]
        root = CodeBlock('function', name=func_name)
        stack = deque([root])

        i = 0
        while i < len(lines):
            line = lines[i].strip()
            if not line:
                i += 1
                continue

            current = stack[-1]

            # Check for inline control structures
            if match := INLINE_CONTROL_REGEX.match(line):
                ctrl_type = match.group(1)
                # Create new block node for control structure
                block = CodeBlock(ctrl_type, content=[line])
                current.children.append(block)

                # If there is no opening brace, assume next line is the body
                if '{' not in line:
                    i += 1
                    if i < len(lines):
                        block.content.append(lines[i].strip())
                    i += 1
                    continue
                else:
                    stack.append(block)
                    i += 1
                    continue

            # Block with opening brace only (e.g. "{")
            elif '{' in line and '}' not in line:
                block = CodeBlock('block', content=[line])
                current.children.append(block)
                stack.append(block)

            # Closing brace - end current block
            elif '}' in line:
                current.content.append(line)
                if len(stack) > 1:
                    stack.pop()
                i += 1
                continue

            else:
                current.content.append(line)

                # Detect function calls in the line to parse them recursively
                for callee in FUNC_CALL_REGEX.findall(line):
                    if callee not in self.visited and callee in self.functions:
                        subtree = self.parse_code(callee)
                        if subtree:
                            current.children.append(subtree)

            i += 1

        return root

    def generate_bison_grammar(self, root: CodeBlock):
        lines = []
        # Standard Bison prologue with token union and includes
        lines.append("%defines\n%locations\n%define parse.error verbose\n")
        lines.append("%{\n#include <stdio.h>\n#include <stdlib.h>\nextern FILE *yyin;\nextern char *yytext;\n%}\n")
        lines.append("%union { int ival; char* str; }\n")

        # Declare all tokens
        for token in sorted(self.tokens.keys()):
            lines.append(f"%token <str> {token}\n")

        lines.append("\n%start main\n\n%%\n")

        # Recursively write rules for the grammar tree
        self.write_bison_rules(root, lines, set())

        lines.append("\n%%\n")
        # Main function for parser executable
        lines.append(
            "int main(int argc, char **argv) {\n"
            "    yyin = fopen(argv[1], \"r\");\n"
            "    if (!yyin) { perror(\"open\"); exit(1); }\n"
            "    yyparse();\n"
            "    return 0;\n"
            "}\n"
        )
        return '\n'.join(lines)

    def write_bison_rules(self, node: CodeBlock, lines, written):
        rule_name = node.name or node.type
        if rule_name in written:
            return
        written.add(rule_name)

        lines.append(f"{rule_name}: /* derived from {node.type} */")

        for line in node.content:
            line = line.strip()
            if not line:
                continue

            # Match tokens that appear in this line
            matched_tokens = [tok for tok in self.tokens if tok in line]

            if matched_tokens:
                # Insert all matched tokens as terminals
                for tok in matched_tokens:
                    lines.append(f"    {tok}")
            else:
                # If no tokens matched, add as comment (fallback)
                lines.append(f"    /* {line} */")

        # Add child non-terminals (functions or blocks)
        for child in node.children:
            lines.append(f"    {child.name or child.type}")

        lines.append("    ;\n")

        # Recursively write children rules
        for child in node.children:
            self.write_bison_rules(child, lines, written)

    def run(self):
        self.load_tokens()

        with open(self.source_file) as f:
            lines = f.readlines()

        self.extract_functions(lines)
        self.grammar_tree = self.parse_code("main")

        print("--- Grammar Tree ---")
        print(self.grammar_tree)

        print("\n--- Generating Bison grammar file ---")
        grammar = self.generate_bison_grammar(self.grammar_tree)

        with open("generated_parser.y", "w") as out:
            out.write(grammar)

        print("Bison grammar generated to 'generated_parser.y'")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 grammarBuilder.py <lex_file> <c_source>")
        sys.exit(1)

    lex_path, source_path = sys.argv[1], sys.argv[2]
    extractor = GrammarExtractor(lex_path, source_path)
    extractor.run()
