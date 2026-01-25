# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]
- Get an AST of c code in python. Might that be the better option?
## [Upcoming]
- Moving dictionaryHandler regex code to regexQueries file

## 2 June 2025
- Starting from scratch again
- Strengths of Your Current Implementation
1. Call Graph and Reachability
The call graph ensures all methods called (directly or indirectly) from main are included.
This prevents missing any relevant function in the grammar.
2. Nesting and Non-terminal Naming
The use of a path stack in _process_lines encodes nesting, so each block/loop/conditional gets a unique, hierarchical non-terminal.
This mirrors the structure of nested rules in a hand-written grammar.
3. Loop and Conditional Handling
Both inline and block forms of loops and conditionals are handled.
The code recurses into blocks, and generates alternatives for if/else and optionality for loops/conditionals.
4. Token Grouping
Consecutive writestr/sprintf calls are grouped, so the grammar reflects the actual output sequence.
5. Rule Output
All generated non-terminals and tokens are written to the .y file, ensuring completeness.
What It Will Do Well
Traverse all relevant code paths in text2pdf.c, including nested and sequential function calls.
Reflect the order of tokens as they appear in the code, preserving the sequence of PDF structure.
Handle all forms of control flow (loops, if/else, etc.), including both inline and block forms.
Generate a grammar that is readable and maintainable, with unique non-terminals for each nested structure.
Potential Limitations / Final Recommendations
Complex Expressions in Conditionals/Loops:
If your code has very complex or multi-line conditions, ensure your regexes in _process_lines and _extract_block are robust enough to handle them.

Function Calls in Expressions:
If function calls are embedded in expressions (not on their own line), you may need to enhance getMethodCallLine to detect them.

Manual vs. Generated Grammar Differences:

The generated grammar may have more granular non-terminals (due to unique naming for each block).
Manual grammars sometimes group similar constructs; your generated grammar will be more literal, but this is usually fine for correctness.
Token Extraction:

Ensure findTokenValue and getMethodParamsFromLine are robust and match your actual writestr/sprintf usage.
Testing:

Compare the generated .y file with manualFLexBison.y for a few runs.
If you see extra or missing tokens/non-terminals, check the relevant extraction logic.

## 18 February 2025
- Starting from scratch.
- Decided that a state machine might be the best option to handle the complex nested structure of the C code.
    - created a CParser class. Needs refinement, but it is a start

## 24 October 2022
- Enhanced loopAndConditionalHandling as a class
- Experimenting with stacks to handling if and whiles as well as nested if and whiles

## 20 October 2022
- Renamed dictionaryBuilder to dictionaryHandler
- Started doing while loops
    - Need to do some refactoring to incorporate with if's without repeating myself.
- Added new file called loopsAndConditionalHandling
    - Trying to separate concerns and class is good for keeping context and so forth.

## 17 October 2022
- Moved regex queries to its own file, since it was becoming more and more
- Started doing recursive call logic
- Added else statement logic

## 13 October 2022
- Extracted some methods to make it more reusable and improve reading.
- Started making changes to accomodate conditional(if) statements
- Moved grammar rules and declarations to its own file

## 12 October 2022
- Made changes to output layout of the bison file
- Made changes to flex file regex to support new way of creating the grammar rules
- Some changes to extract Param regex methods
- Continued by adding new files to separate items from main builder class

## 10 October 2022
- Improved findTokenValue method
- Improved retrieving params from writeStr
- Need to look into sprintf and how to make it work
- Added new file for later. Want to refactor by moving related code to its own files

## 15 August 2022
- Started From scratch with grammar auto generation
- Added methods for auto generation

## 21 July 2022
- Removed EMPTY token. Current findToken implementation with regex causes empty to always be found.
- Was a lot more difficult to extract the methods from the c program string file. The regex is difficult and will most probably fail when used on other programming languages.
- Maybe c/c++ is an option for the future. Rather do the hard logic in those languages and then call the method from python


## 18 July 2022
- Chose Python as it is good with both regex and file read/write operations.
- Decided to try dictionaries for the tokens and the methods of the c program.
- Currently hardcoded strings contain certain parts of the bison file to write. Maybe separate into different file and read from file. (Refactoring item)