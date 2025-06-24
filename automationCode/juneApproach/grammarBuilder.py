import re
import random
from fileLoader import *
from dictionaryHandler import *
from regexQueries import *

class GrammarBuilder:
    def __init__(self, token_file, source_file):
        self.token_file = token_file
        self.source_file = source_file
        self.visited_methods = set()
        self.grammar_rules = {}  # method/non-terminal name -> rule string
        self.non_terminals = set()
        self.loop_counter = {}
        self.cond_counter = {}
        self.random_token_counter = 0
        self.tokens = set()

    def build_grammar(self):
        extractTokens(readFile(self.token_file))
        extractAllMethods(readFile(self.source_file))
        self.tokens = set(tokenDictionary.values())
        # Start from main, but also visit all functions called from main
        entry_points = []
        if 'main' in methodDictionary:
            main_body = self._extract_body(methodDictionary['main'])
            # Find all function calls in main
            for line in main_body:
                method_call = getMethodCallLine(line)
                if method_call and method_call in methodDictionary:
                    entry_points.append(method_call)
        # If no main, or no calls found, fall back to all methods
        if not entry_points:
            entry_points = [k for k in methodDictionary.keys()]
        # Visit all entry points
        for entry in entry_points:
            self.visit_method(entry, parent=None)
        # Write output
        self.write_bison_file()

    def visit_method(self, method_name, parent):
        if method_name in self.visited_methods:
            return
        self.visited_methods.add(method_name)
        method_body = methodDictionary.get(method_name)
        if not method_body:
            return
        body = self._extract_body(method_body)
        rule, _ = self._process_lines(body, parent=method_name)
        self.grammar_rules[method_name] = rule
        self.non_terminals.add(method_name)

    def _extract_body(self, method_body):
        # Remove signature and outer braces
        lines = method_body.split('\n')
        start = 0
        for i, line in enumerate(lines):
            if '{' in line:
                start = i + 1
                break
        end = len(lines)
        for i in range(len(lines)-1, -1, -1):
            if '}' in lines[i]:
                end = i
                break
        return lines[start:end]

    def _process_lines(self, lines, parent):
        rule_parts = []
        i = 0
        # Initialize counters for this parent if not present
        if parent not in self.loop_counter:
            self.loop_counter[parent] = 0
        if parent not in self.cond_counter:
            self.cond_counter[parent] = 0
        while i < len(lines):
            line = lines[i].strip()
            if not line or line.startswith('//'):
                i += 1
                continue

            # --- Split lines like '} else {' into multiple logical lines ---
            split_lines = []
            temp = line
            while temp:
                m = re.match(r'^(\}*)\s*(else if|else|if|while|for)?(.*)', temp)
                if m:
                    if m.group(1):
                        split_lines.extend(['}'] * len(m.group(1)))
                    if m.group(2):
                        # reconstruct the statement
                        rest = m.group(3).lstrip()
                        if rest.startswith('('):
                            # e.g., else if (cond) or if (cond)
                            paren_count = 0
                            cond = ''
                            idx = 0
                            for idx, c in enumerate(rest):
                                cond += c
                                if c == '(':
                                    paren_count += 1
                                elif c == ')':
                                    paren_count -= 1
                                    if paren_count == 0:
                                        break
                            split_lines.append(f"{m.group(2)} {cond.strip()}{rest[idx+1:]}")
                        else:
                            split_lines.append(f"{m.group(2)}{rest}")
                        temp = ''
                    else:
                        if m.group(3):
                            split_lines.append(m.group(3).lstrip())
                        temp = ''
                else:
                    split_lines.append(temp)
                    temp = ''
            # Remove empty lines from split_lines
            split_lines = [l for l in split_lines if l.strip()]
            if len(split_lines) > 1:
                # Insert the split lines into lines to process them individually
                lines = lines[:i] + split_lines + lines[i+1:]
                # Do not increment i, process the first split line now
                continue
            else:
                line = split_lines[0]

            if line == '}':
                i += 1
                continue

            # --- Handle Loops (inline and block) ---
            loop_match = re.match(r'(while|for)\s*\((.*?)\)\s*(.*)', line)
            if loop_match:
                loop_id = self.loop_counter[parent]
                self.loop_counter[parent] += 1
                # Use short name: <Function>_L<id>
                loop_nt = f"{parent}_L{loop_id}"
                self.non_terminals.add(loop_nt)
                after_paren = loop_match.group(3).strip()
                if after_paren and not after_paren.startswith('{'):
                    # Inline loop: process the statement after ')'
                    block_lines = [after_paren]
                    consumed = 1
                else:
                    block_lines, consumed = self._extract_block(lines, i)
                loop_rule, _ = self._process_lines(block_lines, parent=parent)
                # Only add /*empty*/ if loop_rule is empty
                if loop_rule.strip():
                    self.grammar_rules[loop_nt] = f"{loop_rule} | /*empty*/"
                else:
                    self.grammar_rules[loop_nt] = "/*empty*/"
                rule_parts.append(loop_nt)
                i += max(consumed, 1)
                continue

            # --- Handle Conditionals (inline and block) ---
            cond_match = re.match(r'(if|else if|else)\s*(\(.*?\))?\s*(.*)', line)
            if cond_match:
                cond_id = self.cond_counter[parent]
                self.cond_counter[parent] += 1
                # Use short name: <Function>_C<id>
                cond_nt = f"{parent}_C{cond_id}"
                self.non_terminals.add(cond_nt)
                after_paren = cond_match.group(3).strip()
                if after_paren and not after_paren.startswith('{'):
                    # Inline conditional: process the statement after ')'
                    block_lines = [after_paren]
                    consumed = 1
                else:
                    block_lines, consumed = self._extract_block(lines, i)
                cond_rule, _ = self._process_lines(block_lines, parent=parent)
                # Only add /*empty*/ if cond_rule is empty
                if cond_rule.strip():
                    self.grammar_rules[cond_nt] = f"{cond_rule} | /*empty*/"
                else:
                    self.grammar_rules[cond_nt] = "/*empty*/"
                rule_parts.append(cond_nt)
                i += max(consumed, 1)
                continue

            # --- Handle writestr/sprintf ---
            if 'writestr' in line or 'sprintf' in line:
                params = getMethodParamsFromLine(line)
                # Ignore writestr if parameter is 'buf' and sprintf is NOT in the line
                if 'writestr' in line and params.strip() == 'buf' and 'sprintf' not in line:
                    i += 1
                    continue
                token = findTokenValue(params).strip()
                if not token:
                    print(f"[WARNING] No token found for string: '{params}' in line: {line}")
                    i += 1
                    continue
                rule_parts.append(token)
                self.tokens.add(token)
                i += 1
                continue

            # --- Handle function calls ---
            method_call = getMethodCallLine(line)
            if method_call and method_call in methodDictionary and method_call != parent:
                self.visit_method(method_call, parent=parent)
                rule_parts.append(method_call)
                i += 1
                continue

            # --- Handle nested blocks (e.g., braces without loop/if) ---
            if '{' in line:
                block_lines, consumed = self._extract_block(lines, i)
                block_rule, _ = self._process_lines(block_lines, parent=parent)
                if block_rule:
                    rule_parts.append(block_rule)
                i += max(consumed, 1)
                continue

            i += 1
        return ' '.join(rule_parts), i

    def extract_inside_curly_brackets(self, line):
        match = re.search(r'\{(.*)\}', line)
        if match:
            return match.group(1).strip()
        return line

    def _extract_block(self, lines, start_idx):
        # Handles both inline and brace-enclosed blocks
        line = lines[start_idx].strip()
        if '{' in line:
            # Block starts on this line or next
            block = []
            brace_count = 0
            started = False
            for idx in range(start_idx, len(lines)):
                l = lines[idx]
                if '{' in l:
                    brace_count += l.count('{')
                    started = True
                if started:
                    block.append(l)
                if '}' in l:
                    brace_count -= l.count('}')
                    if brace_count == 0:
                        # Remove the outermost braces
                        # Find first '{' and last '}'
                        first_brace = None
                        last_brace = None
                        for bidx, bline in enumerate(block):
                            if '{' in bline and first_brace is None:
                                first_brace = bidx
                            if '}' in bline:
                                last_brace = bidx
                        if first_brace is not None and last_brace is not None and first_brace < last_brace:
                            return [line.lstrip() for line in block[first_brace+1:last_brace]], idx - start_idx + 1
                        else:
                            if len(block) ==1:
                                block_without_braces = self.extract_inside_curly_brackets(block[0])
                                return [block_without_braces], idx - start_idx + 1
                            return [block[1:-1]], idx - start_idx + 1
            return [], 1
        else:
            # Inline: next line is the block
            if start_idx + 1 < len(lines):
                return [lines[start_idx + 1]], 2
            return [], 1

    def _random_token(self):
        self.random_token_counter += 1
        token = f"RANDOMTOKEN{self.random_token_counter}"
        self.tokens.add(token)
        return token

    def write_bison_file(self):
        def is_valid_token(token):
            return re.match(r'^[A-Za-z_][A-Za-z0-9_]*$', token) is not None
        with open("generated.y", "w") as f:
            f.write("%defines\n%locations\n%error-verbose\n\n")
            f.write("%{\n#include <stdio.h>\n#include <stddef.h>\n#include <errno.h>\n#include <stdlib.h>\n#include <string.h>\nextern FILE *yyin;\nextern char *yytext;\n")
            f.write("int yylex(void);\nvoid yyerror(const char *s);\n%}\n\n")
            f.write("%union {\n    int ival;\n    char* str;\n};\n\n")
            f.write("/* Tokens */\n")
            for token in sorted(self.tokens):
                if is_valid_token(token):
                    f.write(f"%token <str> {token}\n")
            f.write("\n")
            f.write("%start main\n\n")
            f.write("/* Non-terminals */\n")
            for non_terminal in sorted(self.non_terminals):
                f.write(f"%type <str> {non_terminal}\n")
            f.write("\n%%\n")
            # Always write a main: rule as the entry point
            entry_points = []
            if 'main' in methodDictionary:
                main_body = self._extract_body(methodDictionary['main'])
                for line in main_body:
                    method_call = getMethodCallLine(line)
                    if method_call and method_call in methodDictionary:
                        entry_points.append(method_call)
            if not entry_points:
                entry_points = [k for k in self.visited_methods]
            f.write(f"main: {' '.join(entry_points)};\n")
            # Output rules for all visited methods and generated non-terminals
            for nt in self.visited_methods:
                rule = self.grammar_rules.get(nt, "/*empty*/")
                f.write(f"{nt}: {rule};\n")
            for nt in sorted(self.non_terminals):
                if nt not in self.visited_methods:
                    rule = self.grammar_rules.get(nt, "/*empty*/")
                    f.write(f"{nt}: {rule};\n")
            f.write("\n%%\n")
            f.write('''
int main(int argc, char ** argv) {
 #ifdef YYDEBUG
        yydebug = 1;
    #endif
    yyin = fopen(argv[1],"r");
    if (yyin == NULL) {
        fprintf(stderr, "Could not open '%s': %s\\n", argv[1] , strerror(errno));
        exit(1);
    }
    yyparse();
    int token;
    while ((token = yylex()) != 0) {
        printf("Token: %d (%s)\\n", token, yytext);
    }
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\\n", s);
}
''')

if __name__ == "__main__":
    token_file = "text2PDF.l"
    source_file = "text2pdf.c"
    builder = GrammarBuilder(token_file, source_file)
    builder.build_grammar()
    #python3 grammarBuilder.py text2PDF.l text2pdf.c
