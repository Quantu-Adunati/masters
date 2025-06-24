Project Summary
Main Objective
To automatically generate a Bison/Yacc grammar file (generated.y) that can parse PDF files produced by a specific C program (text2pdf.c). The generated grammar must match the actual token sequence of these PDFs, as recognized by a custom lexer (text2PDF.l), so that a parser can validate such PDFs.

How the Program Works
Source Analysis:

The program analyzes the source code of text2pdf.c to extract the sequence of strings written to the PDF file (via writestr, sprintf, etc.).
It reconstructs the logical structure and order of PDF tokens as output by the C code.
Token Mapping:

It uses a Python dictionary (tokenDictionary) built from the regex/token definitions in text2PDF.l (the lexer).
The function findTokenValue matches each output string from text2pdf.c to the correct token as defined in the lexer, including handling whitespace (SPACE, NEWLINE), numbers, slashwords, and other PDF syntax.
Grammar Construction:

The program builds up Bison/Yacc grammar rules (grammar_rules) that reflect the actual order and repetition of tokens in the PDF output.
It attempts to group repeated tokens into list rules (e.g., NUM_LIST: NUM NUM_LIST | NUM;) but must only do so for real tokens, not arbitrary words.
Grammar Output:

The program writes out a .y file (generated.y) containing:
Token declarations (from the lexer).
Non-terminal and list rules (only for valid, used tokens).
The main rule and all reachable non-terminals.
C code for the parser entry point.
Key Technical Requirements
Token Consistency:
The grammar builder must use the exact same token definitions as the lexer (text2PDF.l). Any change in the lexer must be reflected in the grammar builder.

Whitespace Handling:
The grammar must explicitly include SPACE and NEWLINE tokens wherever they appear in the PDF output.

No Spurious Rules:
Only generate list rules for real tokens (e.g., NUM, STRING, SLASHWORD).
Do not generate rules for arbitrary words or fallback tokens (e.g., character_LIST, fallback_LIST, for_LIST, single_LIST).

Reachability:
Only emit rules and %type declarations for non-terminals that are actually reachable from the main entry point.

PDF Structure Matching:
The generated grammar must match the actual structure and token sequence of PDFs produced by text2pdf.c (see pdfCode.txt for examples).

Current Issues
The current grammar has no mention of SPACE and NEWLINE tokens where they are actually needed.
Take for example the first line %PDF-1.1 should be PDFDECLARATION NEWLINE but instead it is PDFDECLARATION NUM_LIST OBJ LESSTHAN which shows it goes straight to next line and ignores newline. Also the next line is 1 0 obj which should be NUM SPACE NUM SPACE OBJ but instead it is NUM_LIST OBJ where NUM_LIST is declared as NUM NUM_LIST | NUM; showing that it completely ignores the spaces.

What Needs to Happen
Fix the current issues and ensure that the grammar that is generated will match the pdf structure that is outlined in pdfCode.txt
Ensure the grammar builder and lexer are always in sync regarding token definitions.
Test the generated grammar against actual PDF output to ensure it is accepted by the parser.
How to Assist
Understand the mapping between text2pdf.c output, the lexer (text2PDF.l), and the grammar builder.
Ensure any changes to token definitions in the lexer are reflected in the grammar builder.
Help refine the logic that builds grammar rules, especially for grouping and reachability.
Validate that the generated grammar matches the actual PDF structure and passes Bison/Yacc compilation.
In summary:
This project is about reverse-engineering the output of a C PDF generator, mapping it to lexer tokens, and automatically building a parser grammar that can validate such PDFs—while ensuring the grammar is clean, correct, and only references real, used tokens and rules.