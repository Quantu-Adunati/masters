from dictionaryHandler import *
from regexQueries import *


class loopsAndConditionalHandling:
    def __init__(self, rulesName, referenceCount):
        self.stillInsideObject = True
        self.conditionalGrammar = ''
        self.ruleName = rulesName
        self.referenceCount = referenceCount
        if('while' in rulesName):
            self.rulesFormat = '\n{}: /* empty */ | {}\n|{}\n'
        else:
            self.rulesFormat = '\n{}: /* empty */ | {}\n'

    def handleCondition(self, line):
        if('}' not in line and self.stillInsideObject):
            self.getCondtionalGrammar(line)
        else:
             self.setStillInsideObject(False)
        return

    def getCondtionalGrammar(self, line):
        self.conditionalParam = getMethodParamsFromLine(line)
        if(self.conditionalParam):
            self.conditionalGrammar += ' \n| ' if not(not self.conditionalGrammar) else ''
            self.conditionalGrammar += findTokenValue(self.conditionalParam)
        return

    def getFormattedGrammar(self):
        if('while' in self.ruleName or 'for' in self.ruleName):
            return self.rulesFormat.format(self.referenceCount, self.conditionalGrammar, referenceCount)
        else:
            return self.rulesFormat.format(self.referenceCount, self.conditionalGrammar)

    def setStillInsideObject(self, stillInsideObjectToSet):
        self.stillInsideObject = stillInsideObjectToSet
        return self.stopCondition

    def getStillInsideObject(self):
        return self.stillInsideObject
