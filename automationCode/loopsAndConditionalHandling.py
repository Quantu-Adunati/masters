from dictionaryHandler import *
from regexQueries import *
from random_word import RandomWords

class loopsAndConditionalHandling:
    def __init__(self, rulesName, referenceCount):
        self.stillInsideObject = True
        self.conditionalGrammar = ''
        self.ruleName = rulesName
        self.referenceCount = referenceCount
        self.conditional_stack = []
        if('while' in rulesName):
            self.rulesFormat = '\n{}: /* empty */ | {}\n|{}\n'
        else:
            self.rulesFormat = '\n{}: /* empty */ | {}\n'

    def handleCondition(self, line):
        random_word_object = RandomWords()
        random_word = random_word_object.get_random_word()
        number_of_conditional = line.count('if ')
        number_of_closing_brackets = line.count('}')

        if 'while ' in line or 'for ' in line:
            random_word_while = random_word_object.get_random_word()
            self.conditional_stack.append(loopsAndConditionalHandling(
                line, 'while', random_word_while))

        if 'if ' in line or 'else ' in line or 'else if' in line:
            if '{' not in line:
                # It means it is an inline if or else
                handling_object = loopsAndConditionalHandling(line, 'if', random_word)
                handling_object.getCondtionalGrammar(line)
                self.conditional_stack.append(handling_object)
            elif '}' in line and 'else ' in line and 'if ' in line:
                # First handle the end of "IF" then create else
                random_word_for_new_if = random_word_object.get_random_word()       
                #TODO this logic can become own method. a lot of places will 
                # follow similar logic
                ending_if_object = self.conditional_stack.pop()
                object_before_ending_if = self.conditional_stack.pop()
                object_before_ending_if.addToConditionalGrammar(ending_if_object.handleEndOfConditional())
                self.addToConditionalStack(object_before_ending_if)
                # Remove from here so later if statement does not also
                number_of_closing_brackets -= 1
                # hit and unnecessarily remove another element from stack.
                else_conditional =  loopsAndConditionalHandling(line, 'if', random_word))
                if_conditional_inside_else = loopsAndConditionalHandling(line, 'if', random_word_for_new_if)
                else_conditional.addToConditionalGrammar(if_conditional_inside_else)

            elif '}' in line and 'else ' in line:
                # First handle the end of "IF" then create else
                ending_if_object = self.conditional_stack.pop()
                object_before_ending_if = self.conditional_stack.pop()
                object_before_ending_if.addToConditionalGrammar(ending_if_object.handleEndOfConditional())
                self.addToConditionalStack(object_before_ending_if)
                # Remove from here so later if statement does not also
                number_of_closing_brackets -= 1
                # hit and unnecessarily remove another element from stack.
                self.addToConditionalStack(loopsAndConditionalHandling(line, 'if', random_word))
            # elif 'if ' in line and 'else ' in line:
            #     random_word_for_nested = random_word_object.get_random_word()
            #     conditional_stack.append(
            #         createHandlingObject(line, 'if', random_word))
            #     conditional_stack.append(createHandlingObject(
            #         line, 'if', random_word_for_nested))
            #     params += f' {getReferenceCountAsWord(random_word)} '
            elif number_of_conditional > 1:
                inner_conditional = loopsAndConditionalHandling(line, 'if', random_word)
                for _ in range(number_of_conditional -1):
                    random_word_for_for = random_word_object.get_random_word()
                    if(len(inner_conditional.conditional_stack) > 0):# TODO can extract this len check
                        inner_if_condition = inner_conditional.conditional_stack.pop()
                        inner_if_condition.addToConditionalStack(loopsAndConditionalHandling(line, 'if', random_word_for_for))
                        inner_conditional.addToConditionalStack(inner_if_condition)
                    else:
                       inner_conditional.addToConditionalStack(
                        loopsAndConditionalHandling(line, 'if', random_word_for_for))

        if '}' not in line and len(self.conditional_stack) > 0:
            handling_object = self.conditional_stack.pop()
            handling_object.handleCondition(line)
            self.addToConditionalStack(handling_object)
        elif '}' in line and len(self.conditional_stack) > 0 and number_of_closing_brackets > 0:
            current_top_object = self.conditional_stack.pop() # TODO this can also become a method
            for _ in range(number_of_closing_brackets):#TODO check whether I should remove one here with current logic
                test= ''
                #Recursive visiting till last stack element in last object and then work back up closing one by one.
                # TODO create separate function that retrieves last element.
                # Then repetitvely retrieve last element, handle the element
                # retrieve new last element.
        if('}' not in line and self.stillInsideObject):
            self.getCondtionalGrammar(line)
        else:
             self.setStillInsideObject(False)
        return

    def getCondtionalGrammar(self, line):
        self.conditionalParam = getMethodParamsFromLine(line)
        if(self.conditionalParam):
            self.conditionalGrammar += findTokenValue(self.conditionalParam)
        return

    def addToConditionalGrammar(self, grammar):
        self.conditionalGrammar += f" {grammar} "
        return

    def getFormattedGrammar(self):
        if('while' in self.ruleName or 'for' in self.ruleName):
            return self.rulesFormat.format(self.referenceCount, self.conditionalGrammar, self.referenceCount)
        else:
            return self.rulesFormat.format(self.referenceCount, self.conditionalGrammar)

    def setStillInsideObject(self, stillInsideObjectToSet):
        self.stillInsideObject = stillInsideObjectToSet

    def getStillInsideObject(self):
        return self.stillInsideObject

    def hasGrammar(self):
        return len(self.conditionalGrammar) > 0;

    def handleEndOfConditional(self):
        if (self.hasGrammar()):
            return self.getFormattedGrammar()
        return ""
    
    def addToConditionalStack(self, object):
        self.conditional_stack.append(object)
