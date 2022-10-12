import sys
import re

tokenDictionary = dict([])
methodDictionary = dict([])
#TODO refactoring needed here
def extractTokens():
    print('\nExtracting All Tokens')
    print('\n=====================')
    patternToFindAllTokens = '/\* Token Specifications start \*/[\n]((.*\n)*)/\* Token Specifications End \*/'
    allTokens = re.findall(patternToFindAllTokens, flexFileString)

    print('\nExtracting Individual Tokens')
    print('\n============================')
    tokenList = allTokens[0][0].replace('\t', '').split('\n')
    setTokenDictionary(tokenList)

def setMethodDictionary(methodName, method):
    global methodDictionary
    methodDictionary[methodName] = method

def setTokenDictionary(tokenList):
    global tokenDictionary
    for token in tokenList:
        if "yyterminate" not in str(token) and "return" in str(token):
            splitToken = re.split('[ \t]*\{ return ', token)
            splitToken[0] = splitToken[0].replace('"', '')
            splitToken[1] = splitToken[1].replace('; }', '')
            tokenKey = splitToken[0].encode().decode('unicode_escape')
            tokenDictionary[tokenKey] = splitToken[1]

    print('\nThe token dictionary is =>'+str(tokenDictionary))


def extractAllMethods():
    global codeFileString
    methodRegex = r"^(int|char|long|void)\s+(\w+)\s*\(.*\)[\S\s]*?\{(?:.*\n(?!}))*.*\n}$"
    matches = re.finditer(methodRegex, codeFileString, re.MULTILINE)
    for matchNum, match in enumerate(matches, start=1):
        # print("Match {matchNum} was found at {start}-{end}: {match}".format(matchNum=matchNum, start=match.start(), end=match.end(), match=match.group()))

        methodNameRegex = r"(int|char|long|void)[\s]+(\w+)"
        methodName = re.findall(methodNameRegex, match.group())
        if(methodName[0][1] != 'ShowHelp'):
            setMethodDictionary(methodName[0][1], str(match.group()))
