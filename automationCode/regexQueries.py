import re

def extractSprintFMethodParam(methodCall):
    regexPattern = r"\,(.*?)\"\,"
    param = re.search(regexPattern, methodCall).group()
    param = param.translate({ord(ch): '' for ch in '",'}).strip()
    return param.encode().decode('unicode-escape')


def extractWriteStrMethodParam(methodCall):
    regexPattern = r"writestr\(\"(.*?)\"\)"
    if('buf' in methodCall):
        return ''
    return cleanStringUp(re.search(regexPattern, methodCall).group(), '()"')


def getMethodCallLine(line):
    regexPattern = r" (?:[a-zA-Z]+)\("
    regexMatch = getattr(re.search(regexPattern, line), 'group', lambda:'')()
    return cleanStringUp(regexMatch, '( ')
            
def regexFindAll(tokenRegex, character):
    regexPattern = re.escape(tokenRegex) if len(
        tokenRegex) == 1 else tokenRegex
    return re.findall(regexPattern, character)

def cleanStringUp(regexMatch, translatePattern):
    cleanerRegexMatch = regexMatch.translate({ord(ch): '' for ch in translatePattern})
    cleanerRegexMatch = cleanerRegexMatch.replace('writestr', '')
    return cleanerRegexMatch.encode().decode('unicode-escape')

def getMethodParamsFromLine(line):
    if('writestr' in line):
        return extractWriteStrMethodParam(line)
    elif('sprintf' in line):
        return extractSprintFMethodParam(line)
    return ''
