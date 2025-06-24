import re
import random
from fileLoader import *
from dictionaryHandler import *
from regexQueries import *
from collections import Counter

FUNCTION_TO_SECTION = {
        'writeheader': 'HeaderSection',
        'writepages': 'PagesSection',
        'writerest': 'TrailerSection',
        # Add more as needed
}
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

    def build_call_graph(self):
        """
        Build a call graph: method_name -> set of called method names.
        """
        call_graph = {}
        for method_name, method_body in methodDictionary.items():
            body_lines = self._extract_body(method_body)
            calls = set()
            for line in body_lines:
                method_call = getMethodCallLine(line)
                if method_call and method_call in methodDictionary and method_call != method_name:
                    calls.add(method_call)
            call_graph[method_name] = calls
        return call_graph

    def get_reachable_methods(self, entry_points, call_graph):
        """
        Given entry points and a call graph, return all reachable methods.
        """
        reachable = set()
        stack = list(entry_points)
        while stack:
            method = stack.pop()
            if method not in reachable:
                reachable.add(method)
                stack.extend(call_graph.get(method, []))
        return reachable

    def build_grammar(self):
        extractTokens(readFile(self.token_file))
        extractAllMethods(readFile(self.source_file))
        self.tokens = set(tokenDictionary.values())
        call_graph = self.build_call_graph()

        # Determine entry points
        entry_points = []
        if 'main' in methodDictionary:
            main_body = self._extract_body(methodDictionary['main'])
            for line in main_body:
                method_call = getMethodCallLine(line)
                if method_call and method_call in methodDictionary:
                    entry_points.append(method_call)
        if not entry_points:
            entry_points = [k for k in methodDictionary.keys()]

        # Find all reachable methods from entry points
        reachable_methods = self.get_reachable_methods(entry_points, call_graph)

        # Visit all reachable methods
        for method in reachable_methods:
            self.visit_method(method, parent=None)

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
        # Use mapped section name if available
        section_name = FUNCTION_TO_SECTION.get(method_name.lower(), method_name)
        self.grammar_rules[section_name] = rule
        self.non_terminals.add(section_name)

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

    def _process_lines(self, lines, parent, path=None, depth=0):
        """
        Processes lines of a method or block, building grammar rules.
        Maintains a path stack to encode nesting in non-terminal names.
        """
        if path is None:
            path = [parent]
        if depth > 100:
            print(f"Max recursion depth reached at {parent} with path {path}")
            return '', 0
        if parent not in self.loop_counter:
            self.loop_counter[parent] = 0
        if parent not in self.cond_counter:
            self.cond_counter[parent] = 0
        rule_parts = []
        i = 0
        while i < len(lines):
            line = lines[i].strip()
            if not line or line == '}':
                i += 1
                continue
            # --- Group consecutive writestr/sprintf tokens ---
            token_group = []
            while i < len(lines):
                line = lines[i].strip()
                if 'writestr' in line or 'sprintf' in line:
                    params = getMethodParamsFromLine(line)
                    if not params or (params.strip() == 'buf' and 'writestr' in line):
                        i += 1
                        continue
                    tokens = findTokenValue(params).strip().split()
                    if not tokens:
                        print(f"[WARNING] No token found for string: '{params}' in line: {line}")
                        i += 1
                        continue
                    # Instead of grouping, append each token in order
                    for token in tokens:
                        self.tokens.add(token)
                        token_group.append(token)
                    i += 1
                else:
                    break
            if token_group:
                # Do not group into _LIST if SPACE or NEWLINE is present
                j = 0
                while j < len(token_group):
                    token = token_group[j]
                    if token in ('SPACE', 'NEWLINE'):
                        rule_parts.append(token)
                        j += 1
                        continue
                    # Check for consecutive identical tokens not separated by SPACE/NEWLINE
                    k = j + 1
                    while (k < len(token_group) and
                           token_group[k] == token and
                           token_group[k-1] not in ('SPACE', 'NEWLINE')):
                        k += 1
                    count = k - j
                    if count > 1:
                        list_nt = f"{token}_LIST"
                        self.non_terminals.add(list_nt)
                        self.grammar_rules[list_nt] = f"{token} {list_nt} | {token}"
                        rule_parts.append(list_nt)
                        j = k
                    else:
                        rule_parts.append(token)
                        j += 1
                continue

            # --- Handle Loops (inline and block) ---
            loop_match = re.match(r'(while|for)\s*\((.*?)\)\s*(.*)', line)
            if loop_match:
                loop_type = loop_match.group(1)
                loop_id = self.loop_counter[parent]
                self.loop_counter[parent] += 1
                loop_nt = '_'.join(path + [f"L{loop_id}"])
                self.non_terminals.add(loop_nt)
                after_paren = loop_match.group(3).strip()
                if after_paren and not after_paren.startswith('{'):
                    # Inline statement after loop
                    block_lines = [after_paren]
                    consumed = 1
                else:
                    block_lines, consumed = self._extract_block(lines, i)
                # Recurse with updated path
                if block_lines:
                    loop_rule, _ = self._process_lines(block_lines, parent=parent, path=path + [f"L{loop_id}"])
                    self.grammar_rules[loop_nt] = f"{loop_rule} | /*empty*/"
                    rule_parts.append(loop_nt)
                i += max(consumed, 1)
                continue
    
            # --- Handle Conditionals (inline and block) ---
            cond_match = re.match(r'(if|else if|else)\s*(\(.*?\))?\s*(.*)', line)
            if cond_match:
                cond_type = cond_match.group(1).replace(' ', '')
                cond_id = self.cond_counter[parent]
                self.cond_counter[parent] += 1
                cond_nt = '_'.join(path + [f"C{cond_id}"])
                self.non_terminals.add(cond_nt)
                after_paren = cond_match.group(3).strip()
                if after_paren and not after_paren.startswith('{'):
                    block_lines = [after_paren]
                    consumed = 1
                else:
                    block_lines, consumed = self._extract_block(lines, i)
                cond_rule, _ = self._process_lines(block_lines, parent=parent, path=path + [f"C{cond_id}"])
                # Check for 'else' after this block
                alt_rule = None
                next_line_idx = i + consumed
                if next_line_idx < len(lines):
                    next_line = lines[next_line_idx].strip()
                    if next_line.startswith('else'):
                        else_block_lines, else_consumed = self._extract_block(lines, next_line_idx)
                        else_rule, _ = self._process_lines(else_block_lines, parent=parent, path=path + [f"C{cond_id}_ELSE"])
                        alt_rule = else_rule or "/*empty*/"
                        consumed += else_consumed
                if alt_rule:
                    self.grammar_rules[cond_nt] = f"{cond_rule} | {alt_rule}"
                else:
                    # Optional (if without else)
                    self.grammar_rules[cond_nt] = f"{cond_rule} | /*empty*/"
                rule_parts.append(cond_nt)
                i += max(consumed, 1)
                continue
    
            # --- Handle writestr/sprintf ---
            if 'writestr' in line or 'sprintf' in line:
                params = getMethodParamsFromLine(line)
                # Skip writestr(buf) and empty params
                if not params or (params.strip() == 'buf' and 'writestr' in line):
                    i += 1
                    continue
                token = findTokenValue(params).strip()
                if not token:
                    i += 1
                    continue
                rule_parts.append(token)
                self.tokens.add(token)
                i += 1
                continue
    
            # --- Handle function calls ---
            method_call = getMethodCallLine(line)
            if method_call and method_call in methodDictionary and method_call != parent and method_call not in self.visited_methods:
                self.visit_method(method_call, parent=parent)
                rule_parts.append(method_call)
                i += 1
                continue
    
            # --- Handle nested blocks (e.g., braces without loop/if) ---
            if '{' in line:
                block_lines, consumed = self._extract_block(lines, i)
                # Prevent infinite recursion on empty or unchanged blocks
                if block_lines and block_lines != lines[i:i+len(block_lines)]:
                    block_rule, _ = self._process_lines(block_lines, parent=parent, path=path + [f"B{i}"], depth=depth+1)
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
        """
        Extracts a block of code starting at start_idx.
        Handles:
          - Inline statements (no braces)
          - Single-line blocks { ... }
          - Multi-line and nested blocks
        Returns (block_lines, consumed_count)
        """
        line = lines[start_idx].strip()
        # Case 1: Block starts with '{' on this line
        if '{' in line:
            block = []
            brace_count = 0
            started = False
            for idx in range(start_idx, len(lines)):
                l = lines[idx]
                # Count braces
                brace_count += l.count('{')
                if '{' in l:
                    started = True
                if started:
                    block.append(l)
                brace_count -= l.count('}')
                if started and brace_count == 0:
                    # Remove outermost braces if present
                    first = next((i for i, x in enumerate(block) if '{' in x), None)
                    last = len(block) - 1 - next((i for i, x in enumerate(reversed(block)) if '}' in x), None)
                    # Only strip if braces are present
                    if first is not None and last > first:
                        block_lines = [x.strip() for x in block[first+1:last]]
                    else:
                        block_lines = [x.strip() for x in block]
                    # GUARD: If block_lines is empty, don't recurse
                    if not block_lines:
                        return [], idx - start_idx + 1
                    return block_lines, idx - start_idx + 1
            return [], 1
        # Case 2: Block is a single statement on the same line after if/while/for
        elif re.match(r'^(if|else if|else|while|for)\b.*\)\s*[^{;]+;', line):
            # Extract the statement after the condition
            stmt = line.split(')', 1)[-1].strip()
            if stmt.endswith(';'):
                stmt = stmt[:-1].strip()
            return [stmt], 1
        # Case 3: Inline statement on the next line
        elif start_idx + 1 < len(lines):
            next_line = lines[start_idx + 1].strip()
            return [next_line], 2
        else:
            return [], 1

    def _random_token(self):
        self.random_token_counter += 1
        token = f"RANDOMTOKEN{self.random_token_counter}"
        self.tokens.add(token)
        return token

    def write_bison_file(self):
        def is_valid_token(token):
            # Exclude C reserved words and invalid identifiers
            reserved = {'for', 'if', 'else', 'while', 'switch', 'case', 'break', 'continue', 'return', 'goto', 'default', 'do', 'int', 'char', 'float', 'double', 'void', 'struct', 'union', 'enum', 'typedef', 'const', 'static', 'extern', 'register', 'volatile', 'signed', 'unsigned', 'short', 'long', 'auto', 'sizeof'}
            return re.match(r'^[A-Za-z_][A-Za-z0-9_]*$', token) and token not in reserved
    
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
                # Remove StartPage and EndPage if not in grammar_rules
                if non_terminal in ("StartPage", "EndPage") and non_terminal not in self.grammar_rules:
                    continue
                f.write(f"%type <str> {non_terminal}\n")
            f.write("\n%%\n")
    
            # --- Find reachable non-terminals ---
            # Build a dependency graph of non-terminals
            dep_graph = {nt: set(re.findall(r'\b[A-Za-z_][A-Za-z0-9_]*\b', rule))
                         for nt, rule in self.grammar_rules.items()}
            # Remove self-dependencies and tokens
            for nt in dep_graph:
                dep_graph[nt] = {x for x in dep_graph[nt] if x in self.grammar_rules and x != nt}
    
            # Find all reachable non-terminals from main
            # --- MAIN RULE INSERTION ---
            # Insert a main rule if not present
            # Try to infer the main structure from FUNCTION_TO_SECTION
            main_sections = []
            for func in ("HeaderSection", "PagesSection", "TrailerSection"):
                if func in self.grammar_rules:
                    main_sections.append(func)
            if main_sections:
                f.write(f"main: {' '.join(main_sections)};\n")
            else:
                # Fallback: pick all reachable non-terminals
                all_nts = [nt for nt in self.grammar_rules if nt != "main"]
                if all_nts:
                    f.write(f"main: {' '.join(all_nts)};\n")
            # Add main to reachable set
            reachable = set(["main"])
            # Now compute reachability from main
            stack = ["main"]
            # Add the main rule to dep_graph for reachability
            dep_graph["main"] = set(main_sections) if main_sections else set(all_nts)
            while stack:
                nt = stack.pop()
                for dep in dep_graph.get(nt, []):
                    if dep not in reachable:
                        reachable.add(dep)
                        stack.append(dep)
    
            # --- Only emit reachable and non-empty rules ---
            for nt in sorted(self.grammar_rules):
                if nt not in reachable:
                    continue
                rule = self.grammar_rules[nt]
                # Skip rules that are only empty
                if rule.strip() == "/*empty*/" or rule.strip() == "":
                    continue
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
