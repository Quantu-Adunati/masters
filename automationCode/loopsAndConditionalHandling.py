from dictionaryHandler import *
from regexQueries import *

stopCondition = '}'
stillInsideObject = False
conditionalGrammar = ''

def handleCondition(line):
    setStillInsideObject(True)
    
    return

def getCondtionalGrammar(line):
    global conditionalGrammar
    
    conditionalParam = getMethodParamsFromLine(line)
    if(conditionalParam):
        conditionalGrammar += findTokenValue(conditionalParam)
    return

def setStopCondition(stopConditionToSet):
    global stopCondition
    stopCondition = stopConditionToSet

def setStillInsideObject(stillInsideObjectToSet):
    global stillInsideObject
    stillInsideObject = stillInsideObjectToSet

def getStopCondition():
    global stopCondition
    return stopCondition

def getStillInsideObject():
    global stillInsideObject
    return stillInsideObject
