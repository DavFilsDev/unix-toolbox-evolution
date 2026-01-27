# File: level-1-shell-basics/file-cleaner/cleanmytemp.sh
#!/bin/bash
# cleanmytemp.sh - Basic file cleaner
# Level 1 - Project 1

echo "File Cleaner - Starting..."
echo ""

# Ask user for confirmation
read -p "Clean temporary files? (y/n): " user_answer

if [ "$user_answer" = "y" ]; then
    echo "Cleaning files..."
else
    echo "Cancelled by user."
    exit 0
fi