# File: level-1-shell-basics/file-cleaner/README.md
# File Cleaner Documentation

## Overview
A simple Bash script to clean temporary files from `/tmp` and user cache directories.

## Features
- Cleans files older than 7 days from `/tmp`
- Cleans user cache directory (`~/.cache`)
- Shows disk usage before cleaning
- Asks for user confirmation
- Dry-run mode for preview
- Help option

## Usage
```bash
# Make executable
chmod +x cleanmytemp.sh

# Run normally
./cleanmytemp.sh

# Preview what would be deleted
./cleanmytemp.sh --dry-run

# Show help
./cleanmytemp.sh --help
```

## Commands Learned
- `find` - Search for files
- `du` - Show disk usage
- `rm` - Remove files
- `read` - Get user input
- `if/else` - Conditional logic

## Safety Features
- User confirmation required
- Error suppression for protected files
- Existence checks before deletion