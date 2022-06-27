#! /bin/bash
fileToVerify=$1

$(cat "$fileToVerify"| tr -dc [:print:]'\n' | xxd -p | awk '/(656e6473747265616d|73747265616d0a)/{print}/73747265616d0a/,/656e6473747265616d/{next}1' | xxd -r > test.pdf)