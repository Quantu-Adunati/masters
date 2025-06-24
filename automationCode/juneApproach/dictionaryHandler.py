import re
from regexQueries import *

tokenDictionary = dict([])
methodDictionary = dict([])

def extractTokens(flexFileString):
    print('\nExtracting All Tokens')
    print('\n=====================')
    # Match four spaces at the start of the marker lines
    patternToFindAllTokens = r' {4}/\* Token Specifications start \*/[\n]((.*\n)*) {4}/\* Token Specifications End \*/'
    allTokens = re.findall(patternToFindAllTokens, flexFileString)

    print('\nExtracting Individual Tokens')
    print('\n============================')
    tokenList = allTokens[0][0].replace('    ', '').split('\n')
    setTokenDictionary(tokenList)

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


def setMethodDictionary(methodName, method):
    global methodDictionary
    methodDictionary[methodName] = method


def extractAllMethods(codeFileString):
    methodRegex = r"^(int|char|long|void)\s+(\w+)\s*\(.*\)[\S\s]*?\{(?:.*\n(?!}))*.*\n}$"
    matches = re.finditer(methodRegex, codeFileString, re.MULTILINE)
    for matchNum, match in enumerate(matches, start=1):
        # print("Match {matchNum} was found at {start}-{end}: {match}".format(matchNum=matchNum, start=match.start(), end=match.end(), match=match.group()))

        methodNameRegex = r"(int|char|long|void)[\s]+(\w+)"
        methodName = re.findall(methodNameRegex, match.group())
        if(methodName[0][1] != 'ShowHelp'):
            setMethodDictionary(methodName[0][1], str(match.group()))

def split_string_with_spaces(input_string):
    return re.findall(r'\S+|\s', input_string)

def split_string(input_string):
    match = re.match(r"(.*?)(\n)$", input_string)
    if match:
        part1 = split_string_with_spaces(match.group(1))
        part2 = [match.group(2)]
        return part1 + part2
    return split_string_with_spaces(input_string)

# def findTokenValue(stringToBePrinted):
#     matchedTokens = []
#     global tokenDictionary
#     if stringToBePrinted:
#         # Try to match the whole string to a token regex
#         print(stringToBePrinted);
#         for tokenRegex in tokenDictionary:
#             try:
#                 if re.fullmatch(tokenRegex, stringToBePrinted):
#                     matchedTokens.append(tokenDictionary[tokenRegex])
#                     break
#             except re.error:
#                 continue
#         # If not matched, try splitting and matching each part
#         if not matchedTokens:
#             stringToBePrintedSplit = split_string(stringToBePrinted)
#             for index, character in enumerate(stringToBePrintedSplit):
#                 for tokenRegex in tokenDictionary:
#                     try:
#                         if re.fullmatch(tokenRegex, character):
#                             matchedTokens.append(tokenDictionary[tokenRegex])
#                             # if "\n" in character:
#                             #     matchedTokens.append(tokenDictionary.get('\n', 'NEWLINE'))
#                             # if index < (len(stringToBePrintedSplit)-1):
#                             #     matchedTokens.append("SPACE")
#                             break
#                     except re.error:
#                         continue
#     return '{} '.format(' '.join(matchedTokens))


def getReferenceCountAsWord(referenceCount):
    return 'yy{}yy'.format(referenceCount.strip())

def findTokenValue(s):
    """
    Given a string s, return a space-separated string of token names as matched by the lexer.
    Handles format strings and preserves SPACE/NEWLINE.
    """
    # Handle format specifiers
    s = re.sub(r'%[0-9]*[l]?[du]', 'NUM', s)
    s = re.sub(r'%[0-9]*[s]', 'STRING', s)
    # Now split and map as before
    tokens = []
    for part in re.split(r'(\s+|[()\'"])', s):
        if not part or part.isspace():
            if part == '\n':
                tokens.append('NEWLINE')
            elif part == ' ':
                tokens.append('SPACE')
            continue
        # Try to match to a token
        matched = False
        for regex, token in tokenDictionary.items():
            if re.fullmatch(regex, part):
                tokens.append(token)
                matched = True
                break
        if not matched:
            # Fallback for punctuation or unknowns
            if part == '\n':
                tokens.append('NEWLINE')
            elif part == ' ':
                tokens.append('SPACE')
            elif part in ("(", ")", "'", '"'):
                tokens.append('STRING')
    return ' '.join(tokens)

# def findTokenValue(s):
#     """
#     Given a string s, return a space-separated string of token names as matched by the lexer.
#     Handles format strings and preserves SPACE/NEWLINE.
#     """
#     import re
#     tokens = []
#     # Handle format specifiers
#     s = re.sub(r'%[0-9]*[l]?[du]', 'NUM', s)
#     s = re.sub(r'%[0-9]*[s]', 'STRING', s)
#     # Split on whitespace and punctuation
#     for part in re.findall(r'\d+|[a-zA-Z_]+|[^\w\s]', s):
#         if part.isdigit():
#             tokens.append('NUM')
#         elif part.isspace():
#             if part == '\n':
#                 tokens.append('NEWLINE')
#             elif part == ' ':
#                 tokens.append('SPACE')
#         else:
#             # Try to match to a token
#             matched = False
#             for regex, token in tokenDictionary.items():
#                 if re.fullmatch(regex, part):
#                     tokens.append(token)
#                     matched = True
#                     break
#             if not matched:
#                 if part == '\n':
#                     tokens.append('NEWLINE')
#                 elif part == ' ':
#                     tokens.append('SPACE')
#                 else:
#                     tokens.append('STRING')
#     return ' '.join(tokens)
