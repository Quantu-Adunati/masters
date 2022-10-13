import re
import sys
from fileLoader import readFile
from dictionaryBuilder import *
from createBisonDeclarations import *
from num2words import num2words

visitedMethods = []


def main():
    print('Starting Main')
    print('\n=============')
    extractTokens(readFile(sys.argv[1]))
    extractAllMethods(readFile(sys.argv[2]))
    createBisonFile()


def extractSprintFMethodParam(methodCall):
    regexPattern = r"\,(.*?)\"\,"
    param = re.search(regexPattern, methodCall).group()
    param = param.translate({ord(ch): '' for ch in '",'}).strip()
    return param.encode().decode('unicode-escape')


def extractWriteStrMethodParam(methodCall):
    regexPattern = r"writestr\(\"(.*?)\"\)"
    if('buf' in methodCall):
        return ''
    return cleanStringUp(re.search(regexPattern, methodCall).group())


def cleanStringUp(regexMatch):
    cleanerRegexMatch = regexMatch.translate({ord(ch): '' for ch in '()"'})
    cleanerRegexMatch = cleanerRegexMatch.replace('writestr', '')
    return cleanerRegexMatch.encode().decode('unicode-escape')


def visitEachMethod(methodToVisit, grammarReferenceCount):
    conditionalGrammar = ''
    ifStopCondition = '}'
    grammarRuleForIf = '\n{}: /* empty */ | {}\n'
    referenceCountAsWord = 'yy{}yy'.format(num2words(grammarReferenceCount))

    if(hasMethodBeenVisited(methodToVisit) is False):
        grammar = ' {}\n{}:'.format(methodToVisit, methodToVisit)

        for line in methodDictionary.get(methodToVisit).split(';'):
            # Need to check loops and conditional statements
            # Use grammarCount(as key) to create the subgrammars and
            # reference in caller grammar
            params = ''
            # TODO Check whether another method is mentioned here, then go inside and recuresively do it
            # if(methodName in methodDictionary):
            #     result, conditionalResult = visitEachMethod(grammarReferenceCount+10)
            if("}" in line): ifStopCondition = '}'
            if(ifStopCondition != "}" and not "if " in line):
                # We are still in the if object
                conditionalParam = getMethodParamsFromLine(line)
                if(conditionalParam):
                    conditionalGrammar += findTokenValue(conditionalParam)
            elif("if " in line):
                ifStopCondition = '' # Change stopCondition
                conditionalParam = getMethodParamsFromLine(line)
                if(conditionalParam):
                    params += referenceCountAsWord
                    conditionalGrammar += ' | ' if not(
                        not conditionalGrammar) else ''
                    conditionalGrammar += findTokenValue(conditionalParam)
            else:
                params += getMethodParamsFromLine(line)

            if(params):
                grammar += findTokenValue(params)

        return grammar, grammarRuleForIf.format(referenceCountAsWord, conditionalGrammar)


def getMethodParamsFromLine(line):
    if('writestr' in line):
        return extractWriteStrMethodParam(line)
    elif('sprintf' in line):
        return extractSprintFMethodParam(line)
    return ''


def visitMainMethod():
    mainMethod = methodDictionary.get('main')
    grammarRules, conditionalGrammarRules = ''
    grammarReferenceCount = 1

    for word in mainMethod.split('\n'):
        methodName = word.strip().split('(')[0]
        if(methodName in methodDictionary):
            rules, conditionalRules = visitEachMethod(
                methodName, grammarReferenceCount)

            grammarRules += rules
            conditionalGrammarRules += conditionalRules
            grammarReferenceCount += 1

    return grammarRules + '\n' + conditionalGrammarRules


def hasMethodBeenVisited(methodName):
    if(methodName not in visitedMethods):
        visitedMethods.append(methodName)
        return False
    return True


def findTokenValue(stringToBePrinted):
    matchedTokens = []
    if(stringToBePrinted):
        stringToBePrintedSplit = stringToBePrinted.split(' ')
        for index, character in enumerate(stringToBePrintedSplit):
            for tokenRegex in tokenDictionary:
                if('yy' in character):
                    matchedTokens.append(character)
                    break
                if(len(regexFindAll(tokenRegex, character)) > 0):
                    matchedTokens.append(tokenDictionary[tokenRegex])
                    if("\n" in character):
                        matchedTokens.append(tokenDictionary['\n'])
                    if(index < (len(stringToBePrintedSplit)-1)):
                        matchedTokens.append("SPACE")
                    break
    return '{} '.format(' '.join(matchedTokens))


def regexFindAll(tokenRegex, character):
    regexPattern = re.escape(tokenRegex) if len(
        tokenRegex) == 1 else tokenRegex
    return re.findall(regexPattern, character)


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
