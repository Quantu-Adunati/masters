import sys
from fileLoader import readFile
from dictionaryHandler import *
from createBisonDeclarations import *
from num2words import num2words
from regexQueries import *

visitedMethods = []

def main():
    print('Starting Main')
    print('\n=============')
    extractTokens(readFile(sys.argv[1]))
    extractAllMethods(readFile(sys.argv[2]))
    createBisonFile()


def visitEachMethod(methodToVisit, grammarReferenceCount):
    loopGrammar = conditionalGrammar = recursiveResult = loopGrammarAfterFormat = conditionalGrammarAfterFormat = ''
    ifStopCondition = whileStopCondition = '}'
    conditionalGrammarRulesFormat = '\n{}: /* empty */ | {}\n'
    loopGrammarRulesFormat = '\n{}: /* empty */ | {}\n|{}\n'
    referenceCountAsWord = 'yy{}yy'.format(num2words(grammarReferenceCount))
    grammar = '{}\n{}:'.format(methodToVisit, methodToVisit)

    for line in methodDictionary.get(methodToVisit).split(';'):
        params = ''
        #TODO implement logic for while/for loops
        # if('while ' in line or 'for ' in line):
        #     whileStopCondition = '' # Change stopCondition
        #     loopParam = getMethodParamsFromLine(line)
        #     if(loopParam):
        #         params += referenceCountAsWord
        #         loopGrammar += ' \n| ' if not(not loopGrammar) else ''
        #         loopGrammar += findTokenValue(loopParam)

        methodCallLine = getMethodCallLine(line)
        if(methodCallLine != methodToVisit and methodCallLine in methodDictionary):
            result, conditionalResult, loopResult = visitEachMethod(methodCallLine, grammarReferenceCount+10)
            recursiveResult += result
            conditionalGrammarAfterFormat += conditionalResult
            loopGrammarAfterFormat += loopResult

        if("}" in line): 
                ifStopCondition = '}'
        if(ifStopCondition != "}" and not "if " in line and not "else " in line):
            # We are still in the if/else object
            conditionalParam = getMethodParamsFromLine(line)
            if(conditionalParam):
                conditionalGrammar += findTokenValue(conditionalParam)
        elif("if " in line or "else " in line):
            ifStopCondition = '' # Change stopCondition
            conditionalParam = getMethodParamsFromLine(line)
            if(conditionalParam):
                params += referenceCountAsWord
                conditionalGrammar += ' \n| ' if not(not conditionalGrammar) else ''
                conditionalGrammar += findTokenValue(conditionalParam)
        else:
            params += getMethodParamsFromLine(line)

        if(params):
            grammar += findTokenValue(params)
        if(conditionalGrammar):
            conditionalGrammarAfterFormat = conditionalGrammarRulesFormat.format(referenceCountAsWord, conditionalGrammar)
    
    return '{}{}'.format(grammar, recursiveResult), conditionalGrammarAfterFormat, loopGrammarAfterFormat


def visitMainMethod():
    mainMethod = methodDictionary.get('main')
    grammarRules = conditionalGrammarRules = loopGrammarRules = ''
    grammarReferenceCount = 1

    for word in mainMethod.split('\n'):
        methodName = word.strip().split('(')[0]
        if(methodName in methodDictionary and hasMethodBeenVisited(methodName) is False ):
            rules, conditionalRules, loopGrammarRules = visitEachMethod(
                methodName, grammarReferenceCount)

            grammarRules += rules
            conditionalGrammarRules += conditionalRules
            grammarReferenceCount += 1

    return '{}\n{}\n{}'.format(grammarRules, conditionalGrammarRules, loopGrammarRules)


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
