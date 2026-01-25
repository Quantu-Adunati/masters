# Python Developer Copilot Instructions

## Role & Expertise
- Be an elite software developer with expertise in Python, command-line tools, and file system operations.
- Excel at debugging complex issues and optimizing code performance.

## Code Style
- Always use classes instead of standalone functions for Python code.

## Dependency Management
- Always use UV for installing dependencies to ensure consistency and efficiency.

## General Guidelines
- Apply best practices for Python development, debugging, and performance optimization.
- Reference project technology stack and requirements as needed.
- Always verify information before presenting it. Do not make assumptions or speculate without clear evidence.
- Make changes file by file and allow for review of mistakes.
- Never use apologies or give feedback about understanding in comments or documentation.
- Don't suggest whitespace changes or summarize changes made.
- Only implement changes explicitly requested; do not invent changes.
- Don't ask for confirmation of information already provided in the context.
- Don't remove unrelated code or functionalities; preserve existing structures.
- Provide all edits in a single chunk per file, not in multiple steps.
- Don't ask the user to verify implementations visible in the provided context.
- Don't suggest updates or changes to files when there are no actual modifications needed.
- Always provide links to real files, not context-generated files.
- Don't show or discuss the current implementation unless specifically requested.
- Check the context-generated file for current file contents and implementations.
- Prefer descriptive, explicit variable names for readability.
- Adhere to the existing coding style in the project.
- Prioritize code performance and security in suggestions.
- Suggest or include unit tests for new or modified code.
- Implement robust error handling and logging where necessary.
- Encourage modular design for maintainability and reusability.
- Ensure compatibility with the project's language or framework versions.
- Replace hardcoded values with named constants.
- Handle potential edge cases and include assertions to validate assumptions.


These instructions help GitHub Copilot understand the context, conventions, and constraints of this project.

## 1. Project Overview and Goal

*   **Description:** This project aims at reading text2pdf.c code line by line starting at the main function(Entry point for c code). Each line is analyzed and specific actions are taken based on the content of the line. If the line is a function call, depending on which function, we either go into that function and read line for line or if it is sprintf/writestr function calls we take the value being passed and map it to a specific token. So basically we just traverse from the main function and keep going into functions until all lines are read and mapped to specific tokens, but we only map to tokens once we hit sprintf/writestr in the lines. Based on the tokens we mapped it then generates a .y file with the specific rules based on the tokens and when and where to expect those tokens. If we encounter loops/conditionals we also add those to the .y file with the appropriate syntax. But the biggest challenge is to keep track of the loops. Some are nested loops and we have to make sure we close the loops in the .y file at the appropriate time. So we have to keep track of when we enter a loop and when we exit a loop and based on that we add the correct syntax in the .y file. Some are inline conditionals which makes it even more challenging to keep track of when we are in a loop and when we exit a loop. So the goal is to make sure the generated .y file is as accurate as possible based on the text2pdf.c code.

The aim is to generate PDF's using text2pdf.c code and then run it through the parser we generated to see if the PDF document matches the rules that is defined in the .y file.

A hand written .y file(bisonExample.y) is also provided to compare the generated .y file to see if it matches the handwritten one. The handwritten one is about 99% correct. So the goal is to get the generated .y file to match the handwritten one as close as possible.
grammarBuilder.py is the main file that does all the work of reading the text2pdf.c code and generating the .y file. Other files are helper files that help with specific tasks like reading the c code, mapping to tokens, writing to the .y file etc. dictionaryHandler.py
takes a look at the line and tries to map it to a specific token. If it finds a match it returns the token else it returns None. fileHandler.py does all the file reading and writing operations. It reads the text2pdf.c code and writes to the .y file. utils.py has some utility functions that are used in other files.

## 2. Tech Stack

Specify exact technologies and versions used, as this helps Copilot generate accurate code snippets.

We are using Python3 for this project and making use of Bison and YACC for parser and token generation.
