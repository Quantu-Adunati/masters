import sys

def readFile(fileName):
    print('Reading File With Name: ' + fileName)
    file = open(fileName, "rt")

    fileString = file.read()
    print('\File Contents => ' + fileString)
    file.close()

    return fileString