#include <rang.hpp>
#include <iostream>


int main() {
  std::cout << rang::style::bold << rang::fg::cyan << "Main Menu"
            << rang::style::reset << std::endl;
  std::cout << rang::fg::green << "1. Start Game" << rang::style::reset
            << std::endl;
  std::cout << rang::fg::yellow << "2. Load Game" << rang::style::reset
            << std::endl;
  std::cout << rang::fg::magenta << "3. Settings" << rang::style::reset
            << std::endl;
  std::cout << rang::fg::red << "4. Exit" << rang::style::reset << std::endl;
  return 0;
}
