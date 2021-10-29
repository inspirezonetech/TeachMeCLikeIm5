#!/bin/bash

echo "run-sh: Inside run-modified-c.sh"

#read json file and store in variable
a=$(cat /home/runner/files_modified.json)
echo "run-sh: Content of files_modified.json: $a" 

#parse json to get file path and name
#cut " from string
b=$(echo "$a" | cut -d '"' -f 2)
#cut [ from string
b=$(echo "$b" | cut -d '[' -f 2)
#cut ] from string
b=$(echo "$b" | cut -d ']' -f 2)

echo "run-sh: After parsing, file to execute: $b"

#check if this is a .c file
if [[ $b == *".c"* ]]; then
    echo "run-sh: This is a .c file, executing"

    #treat warnings as errors in compilmation
    gcc $b -Werror && ./a.out
else
    echo "run-sh: File modified is not a C file! Will not execute"
fi
