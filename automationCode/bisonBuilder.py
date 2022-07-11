from ast import Or
from contextlib import nullcontext
import re
import sys

flexFileString = ""
tokenDictionary = dict([])

def main():
    print('Starting Main')
    readFlexFile(sys.argv[1])
    extractTokens()

def readFlexFile(flexFileName):
    print('Reading File With Name: ' + flexFileName)
    flexFile = open(flexFileName, "rt")
    
    global flexFileString 
    flexFileString = flexFile.read()
    print('\nFlex Contents => ' + flexFileString)
    
    flexFile.close()

def extractTokens():
    print('\nExtracting All Tokens')
    patternToFindAllTokens = '/\* Token Specifications start \*/[\n]((.*\n)*)/\* Token Specifications End \*/'
    allTokens = re.findall(patternToFindAllTokens, flexFileString)
   
    print('\nExtracting Individual Tokens')
    tokenList = allTokens[0][0].replace('\t','').split('\n')
    
    global tokenDictionary
    for token in tokenList:
        if "yyterminate" not in str(token) and "return" in str(token):
            splitToken = re.split('[ \t]*\{ return ', token)
            splitToken[0] = splitToken[0].replace('"', '')
            splitToken[1] = splitToken[1].replace('; }','')
            tokenDictionary[splitToken[0]] = splitToken[1]
    
    print('The token dictionary is =>'+str(tokenDictionary))
if __name__ == '__main__':
    main()