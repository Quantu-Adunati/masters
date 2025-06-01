import sys
from fileLoader import readFile
from dictionaryHandler import *
from createBisonDeclarations import *
from regexQueries import *
from loopsAndConditionalHandling import *
from random_word import RandomWords
from CParserStateMachine import CParser

visitedMethods = []


def main():
    print('Starting Main')
    print('\n=============')
    extractTokens(readFile(sys.argv[1]))
    extractAllMethods(readFile(sys.argv[2]))
    createBisonFile()


def visitMainMethod():
    mainMethod = methodDictionary.get('main')
    grammarRules = conditionalGrammarRules = ''
    methodDeclaration = True
    for word in mainMethod.split('\n'):
        methodName = word.strip().split('(')[0]
        if(methodName in methodDictionary and hasMethodBeenVisited(methodName) is False):
            rules = conditionalRules = ''
            rules, conditionalRules = visitEachMethod(
                methodName, methodDeclaration)

            grammarRules += rules
            conditionalGrammarRules += conditionalRules

    return '{}\n{}'.format(grammarRules, conditionalGrammarRules)

def hasMethodBeenVisited(methodName):
    if(methodName not in visitedMethods):
        visitedMethods.append(methodName)
        return False
    return True

# Modified to use CParser
def visitEachMethod(method_to_visit, method_declaration):
    random_word_object = RandomWords()
    conditional_grammar_after_format = recursive_result = ''
    grammar = f'{method_to_visit}\n{method_to_visit}:' if method_declaration else f'{method_to_visit}:'
    conditional_stack = []

    # Use CParser to parse the method body
    parser = CParser()
    parser.parse(methodDictionary.get(method_to_visit))

    # Extract grammar rules from the CParser state transitions
    for state, nesting_level, current_function in parser.state_transitions:
        if current_function == method_to_visit:  # Only process lines within the current function
            if state == "IF":
                random_word = random_word_object.get_random_word()
                conditional_stack.append(createHandlingObject(
                    "if", 'if', random_word))
                grammar += f' {getReferenceCountAsWord(random_word)} '
            elif state == "ELSE":
                if conditional_stack:
                    handling_object = conditional_stack.pop()
                    handling_object.handleCondition("else")
                    conditional_stack.append(handling_object)
            elif state == "WHILE":
                random_word = random_word_object.get_random_word()
                conditional_stack.append(createHandlingObject(
                    "while", 'while', random_word))
                grammar += f' {getReferenceCountAsWord(random_word)} '
            elif state == "FOR":
                random_word = random_word_object.get_random_word()
                conditional_stack.append(createHandlingObject(
                    "for", 'for', random_word))
                grammar += f' {getReferenceCountAsWord(random_word)} '
            elif state == "STATEMENT":
                # Handle general statements (I might need to refine this logic)
                params = getMethodParamsFromLine(state)
                if params:
                    grammar += findTokenValue(params)
            elif state == "FUNCTION_DECLARATION":
                # Handle function calls
                function_name = state.split(" ")[1].strip("();")
                if function_name != method_to_visit and function_name in methodDictionary:
                    result, conditional_result = visitEachMethod(
                        function_name, False)
                    recursive_result += result
                    conditional_grammar_after_format += conditional_result

                    if conditional_stack:
                        handling_object = conditional_stack.pop()
                        handling_object.addToConditionalGrammar(function_name)
                        conditional_stack.append(handling_object)
                    else:
                        grammar += f' {function_name} '

    if recursive_result:
        return f'{grammar}\n{recursive_result}', conditional_grammar_after_format
    return f'{grammar}', conditional_grammar_after_format


def createHandlingObject(line, condition, referenceCount):
    handlingObject = loopsAndConditionalHandling(
        condition, getReferenceCountAsWord(referenceCount))
    handlingObject.handleCondition(line)
    return handlingObject

def createBisonFile():
    with open('test.y', 'w') as f:
        f.write(bisonStartString)
        f.write(createTokenDeclaration())
        f.write(createGrammarRulesStart())
        f.write(visitMainMethod())
        f.write(createGrammarRulesEnd())
        f.write(bisonMainString)


if __name__ == '__main__':
    main()
