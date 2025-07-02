import re

def extractSprintFMethodParam(methodCall):
    import re
    # Match the format string inside the first pair of quotes after the first comma
    regexPattern = r',\s*"((?:[^"\\]|\\.)*)"'
    match = re.search(regexPattern, methodCall)
    if not match:
        return ''
    param = match.group(1)
    # Decode escape sequences (so \n becomes an actual newline)
    param = param.encode().decode('unicode_escape')
    return param


def extractWriteStrMethodParam(methodCall):
    regexPattern = r"writestr\(\"(.*?)\"\)"
    if('buf' in methodCall):
        return ''
    match = re.search(regexPattern, methodCall)
    if not match:
        return ''
    # Only clean up the matched group (the string inside quotes)
    return cleanStringUp(match.group(1), '"')


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
    if('sprintf' in line):
        return extractSprintFMethodParam(line)
    elif('writestr' in line):
        return extractWriteStrMethodParam(line)
    return ''
