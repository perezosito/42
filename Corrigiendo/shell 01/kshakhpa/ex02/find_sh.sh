#! /bin/bash
find . -name "*.sh" -exec basename {} \;  | sed "s/\.sh//"
# Be an engineer: if it does work, don't touch it!
# find . - searches for things in this folder
# -type f - limits type to file (excessive, folders have no extensions)
# "*.sh" - etension
# - exec basename  - cuts the name to the filename without full address
# sed cuts the extension
