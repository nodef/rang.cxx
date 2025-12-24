#!/usr/bin/env bash
# Fetch the latest version of the library
fetch() {
if [ -f "rang.hpp" ]; then return; fi
URL="https://github.com/agauniyal/rang/raw/refs/heads/master/include/rang.hpp"
FILE="rang.hpp"

# Download the release
if [ ! -f "$FILE" ]; then
  echo "Downloading $FILE from $URL ..."
  curl -L "$URL" -o "$FILE"
  echo ""
fi
}


# Test the project
test() {
echo "Running 01-intro-to-colors.cxx ..."
clang -I. -o 01.exe examples/01-intro-to-colors.cxx        && ./01.exe && echo -e "\n"
echo "Running 02-colorful-menu.cxx ..."
clang -I. -o 02.exe examples/02-colorful-menu.cxx          && ./02.exe && echo -e "\n"
echo "Running 03-logging-system.cxx ..."
clang -I. -o 03.exe examples/03-logging-system.cxx         && ./03.exe && echo -e "\n"
echo "Running 04-terminal-progress-bar.cxx ..."
clang -I. -o 04.exe examples/04-terminal-progress-bar.cxx  && ./04.exe && echo -e "\n"
echo "Running 05-rainbow-banner.cxx ..."
clang -I. -o 05.exe examples/05-rainbow-banner.cxx         && ./05.exe && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test
elif [[ "$1" == "fetch" ]]; then fetch
else echo "Usage: $0 {fetch|test}"; fi
