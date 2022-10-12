# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]
## 12 October 2022
- Made changes to output layout of the bison file
- Made changes to flex file regex to support new way of creating the grammar rules
- Some changes to extract Param regex methods

## 10 October 2022
- Improved findTokenValue method
- Improved retrieving params from writeStr
- Need to look into sprintf and how to make it work
- Added new file for later. Want to refactor by moving related code to its own files

## 15 August 2022
- Started From scratch with grammar auto generation
- Added methods for auto generation

## 21 July 2022
- Removed EMPTY token. Current findToken implementation with regex causes empty to always be found.
- Was a lot more difficult to extract the methods from the c program string file. The regex is difficult and will most probably fail when used on other programming languages.
- Maybe c/c++ is an option for the future. Rather do the hard logic in those languages and then call the method from python


## 18 July 2022
- Chose Python as it is good with both regex and file read/write operations.
- Decided to try dictionaries for the tokens and the methods of the c program.
- Currently hardcoded strings contain certain parts of the bison file to write. Maybe separate into different file and read from file. (Refactoring item)