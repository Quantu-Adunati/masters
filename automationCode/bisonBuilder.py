import sys
from random import seed
from random import randint
from fileLoader import readFile
from dictionaryHandler import *
from createBisonDeclarations import *
from num2words import num2words
from regexQueries import *
from loopsAndConditionalHandling import *

visitedMethods = []


def main():
    seed(1)
    print('Starting Main')
    print('\n=============')
    extractTokens(readFile(sys.argv[1]))
    extractAllMethods(readFile(sys.argv[2]))
    createBisonFile()


def visitEachMethod(methodToVisit, grammarReferenceCount):
    recursiveResult = conditionalGrammarAfterFormat = ''
    grammar = '{}\n{}:'.format(methodToVisit, methodToVisit)
    conditionalStack = []
    referenceCount = grammarReferenceCount

    for line in methodDictionary.get(methodToVisit).split(';'):
        params = ''
        methodCallLine = getMethodCallLine(line)
        referenceCount += randint(0,1000)
        if("if " in line or "else " in line):
            conditionalStack.append(createHandlingObject(line, 'if', grammarReferenceCount))
            params += getReferenceCountAsWord(referenceCount)
        elif('while ' in line or 'for ' in line):
            conditionalStack.append(createHandlingObject(line, 'while', grammarReferenceCount))
            params += getReferenceCountAsWord(referenceCount)
        elif('}' not in line and conditionalStack.count() > 0):
            handlingObject = conditionalStack.pop()
            handlingObject.handleCondition(line)
            conditionalStack.append(handlingObject)
        elif(not methodCallLine):
            params += getMethodParamsFromLine(line)
            if(params):
                grammar += findTokenValue(params)

        if(methodCallLine != methodToVisit and methodCallLine in methodDictionary):
            result, conditionalResult = visitEachMethod(
                methodCallLine, grammarReferenceCount+10)
            recursiveResult += result
            conditionalGrammarAfterFormat += conditionalResult

    while(conditionalStack.count() > 0):
        handlingObject = conditionalStack.pop()
        conditionalGrammarAfterFormat += ' \n| ' if not(not conditionalGrammarAfterFormat) else ''
        conditionalGrammarAfterFormat += handlingObject.getFormattedGrammar()

    return '{}{}'.format(grammar, recursiveResult), conditionalGrammarAfterFormat


def createHandlingObject(line, condition, referenceCount):
    handlingObject = loopsAndConditionalHandling(
        condition, getReferenceCountAsWord(referenceCount))
    handlingObject.handleCondition(line)
    return handlingObject


def getReferenceCountAsWord(referenceCount):
    return 'yy{}yy'.format(num2words(referenceCount))


def visitMainMethod():
    mainMethod = methodDictionary.get('main')
    grammarRules = conditionalGrammarRules = loopGrammarRules = ''
    grammarReferenceCount = 1

    for word in mainMethod.split('\n'):
        methodName = word.strip().split('(')[0]
        if(methodName in methodDictionary and hasMethodBeenVisited(methodName) is False):
            rules, conditionalRules = visitEachMethod(
                methodName, grammarReferenceCount)

            grammarRules += rules
            conditionalGrammarRules += conditionalRules
            grammarReferenceCount += 1

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
