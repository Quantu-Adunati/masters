import sys
from fileLoader import readFile
from dictionaryHandler import *
from createBisonDeclarations import *
from regexQueries import *
from loopsAndConditionalHandling import *
from random_word import RandomWords

visitedMethods = []


def main():
    print('Starting Main')
    print('\n=============')
    extractTokens(readFile(sys.argv[1]))
    extractAllMethods(readFile(sys.argv[2]))
    createBisonFile()


def visitEachMethod(method_to_visit, method_declaration):
    random_word_object = RandomWords()
    conditional_grammar_after_format = recursive_result = ''
    grammar = f'{method_to_visit}\n{method_to_visit}:' if method_declaration else f'{method_to_visit}:'
    conditional_stack = []

    for line in methodDictionary.get(method_to_visit).split(';'):
        method_call_line = getMethodCallLine(line)
        params = ''
       

        if 'while ' in line or 'for ' in line:
            if(len(conditional_stack > 0)):
                handling_object = conditional_stack.pop()
                handling_object.handleCondition(line)
                conditional_stack.append(handling_object)
            else:
                 random_word_while = random_word_object.get_random_word()
            conditional_stack.append(createHandlingObject(
                line, 'while', random_word_while))
            params += f' {getReferenceCountAsWord(random_word_while)} '
           

        if 'if ' in line or 'else ' in line or 'else if' in line:
            if(len(conditional_stack > 0)):
                handling_object = conditional_stack.pop()
                handling_object.handleCondition(line)
                conditional_stack.append(handling_object)
            else:
                random_word = random_word_object.get_random_word()
                conditional_stack.append(
                createHandlingObject(line, 'if', random_word))
                params += f' {getReferenceCountAsWord(random_word)} '

        else:
            # We are still in the conditionals or just normal parts of the code
            params += getMethodParamsFromLine(line)

        # This is where the recursive part comes in when we visit a new function
        if method_call_line != method_to_visit and method_call_line in methodDictionary:
            result, conditional_result = visitEachMethod(
                method_call_line, False)
            recursive_result += result
            conditional_grammar_after_format += conditional_result

            if len(conditional_stack) > 0:
                # If true, that means the recursive happened inside a conditional.
                # Thus that conditional needs to receive the rule name created in the recursive call
                handling_object = conditional_stack.pop()
                handling_object.addToConditionalGrammar(method_call_line)
                conditional_stack.append(handling_object)
            else:
                # Recursive call happened outside of a conditional. Add to normal flow
                grammar += f' {method_call_line} '

        if params:
            grammar += findTokenValue(params)
    if(len(recursive_result) > 0):
        return f'{grammar}\n{recursive_result}', conditional_grammar_after_format
    return f'{grammar}', conditional_grammar_after_format



def createHandlingObject(line, condition, referenceCount):
    handlingObject = loopsAndConditionalHandling(
        condition, getReferenceCountAsWord(referenceCount))
    handlingObject.handleCondition(line)
    return handlingObject



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
