#!/bin/bash

# Text Processor Script
# Demonstrates basic AWK and SED usage

FILE="sample.txt"

if [[ ! -f "$FILE" ]]; then
    echo "Error: $FILE not found!"
    exit 1
fi

echo "=============================="
echo "        TEXT PROCESSOR        "
echo "=============================="

echo
echo "1) Show all names (AWK)"
awk -F',' '{ print $1 }' "$FILE"

echo
echo "2) Show people older than 25 (AWK)"
awk -F',' '$2 > 25 { print $1 " (" $2 ")" }' "$FILE"

echo
echo "3) Replace 'Developer' with 'Software Engineer' (SED)"
sed 's/Developer/Software Engineer/g' "$FILE"

echo
echo "4) Convert all text to uppercase (SED)"
sed 's/.*/\U&/' "$FILE"

echo
echo "5) Add line numbers (AWK)"
awk '{ print NR ": " $0 }' "$FILE"

echo
echo "=============================="
echo "        END OF OUTPUT         "
echo "=============================="
