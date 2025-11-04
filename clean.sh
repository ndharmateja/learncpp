#!/bin/bash

# Remove all a.out files and a.out.dSYM folders recursively

echo "Removing all 'a.out', 'main' files and 'a.out.dSYM', 'main.dSYM' directories..."

# Delete all a.out files
find . -type f -name "a.out" -exec rm -f {} \;

# Delete all main files
find . -type f -name "main" -exec rm -f {} \;

# Delete all a.out.dSYM directories
find . -type d -name "a.out.dSYM" -exec rm -rf {} \;

# Delete all main.dSYM directories
find . -type d -name "main.dSYM" -exec rm -rf {} \;

echo "Cleanup complete!"
