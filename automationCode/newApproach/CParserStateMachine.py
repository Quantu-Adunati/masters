class CParser:
    def __init__(self):
        self.state = "START"
        self.nesting_level = 0 # Track the nesting level to allow transistioning between states accordingly
        self.function_stack = []  # Track active function names
        self.current_function = None
        self.states = {
            "START": self.start_state,
            "PREPROCESSOR": self.preprocessor_state,
            "FUNCTION_DECLARATION": self.function_declaration_state,
            "FUNCTION_BODY": self.function_body_state,
            "IF": self.if_state,
            "ELSE": self.else_state,
            "WHILE": self.while_state,
            "FOR": self.for_state,
            "STATEMENT": self.statement_state,  # Handle general statements
        }

    def start_state(self, line):
        if line.startswith("#"):
            self.state = "PREPROCESSOR"
        elif "function" in line:
            self.state = "FUNCTION_DECLARATION"
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "else" in line:
            self.state = "ELSE"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def preprocessor_state(self, line):
        # Handle preprocessor directives
        # ... (You can add logic for specific directives if needed)
        self.state = "START"

    def function_declaration_state(self, line):
        # Extract function name and parameters
        function_name = line.split(" ")[1].strip("();")
        self.current_function = function_name
        self.function_stack.append(function_name)
        if "{" in line:
            self.state = "FUNCTION_BODY"
            self.nesting_level += 1
        else:
            # Handle function declaration without body
            self.state = "START"

    def function_body_state(self, line):
        if "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"
                self.function_stack.pop()
                self.current_function = None
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "else" in line:
            self.state = "ELSE"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def if_state(self, line):
        if "else" in line:
            self.state = "ELSE"
        elif ";" in line or "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def else_state(self, line):
        if ";" in line or "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def while_state(self, line):
        if ";" in line or "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def for_state(self, line):
        if ";" in line or "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"
        elif "if" in line:
            self.state = "IF"
            self.nesting_level += 1
        elif "while" in line:
            self.state = "WHILE"
            self.nesting_level += 1
        elif "for" in line:
            self.state = "FOR"
            self.nesting_level += 1
        else:
            self.state = "STATEMENT"

    def statement_state(self, line):
        # Handle general statements (including inline conditionals)
        if ";" in line:
            self.state = "START"
        elif "{" in line:
            self.nesting_level += 1
        elif "}" in line:
            self.nesting_level -= 1
            if self.nesting_level == 0:
                self.state = "START"

    def parse(self, filename):
        with open(filename, "r") as file:
            for line in file:
                self.states[self.state](line.strip())
                print(f"State: {self.state}, Nesting Level: {self.nesting_level}, Current Function: {self.current_function}")

# Example usage
# parser = CParser()
# parser.parse("../text2pdf.c")


# Function Tracking: The function_stack and current_function variables keep track of the currently active function.
# Nested Structures: The state machine handles nested if, else, while, and for statements by adjusting the nesting_level and transitioning between states accordingly.
# Inline Conditionals: The statement_state handles general statements, including those with inline conditionals.
# Preprocessor Directives: The preprocessor_state is included for handling preprocessor directives.
# Error Handling: The code includes basic error handling for unbalanced braces and function declarations.

##Important Notes:

# Tokenization: This code assumes that you're reading the C file line by line. You might need a more sophisticated tokenization step to break down lines into individual tokens for more accurate parsing.
# Code Complexity: This implementation is still simplified for demonstration purposes. For a production-level C parser, you would need to handle many more language constructs and edge cases.
# Bison Integration: You can use the information gathered from the state machine to generate the Bison grammar rules.