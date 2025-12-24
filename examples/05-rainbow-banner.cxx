#include <rang.hpp>
#include <iostream>


void printRainbowBanner(const std::string &text) {
  const rang::fg colors[] = {rang::fg::red,   rang::fg::yellow,
                             rang::fg::green, rang::fg::cyan,
                             rang::fg::blue,  rang::fg::magenta};
  int colorCount = sizeof(colors) / sizeof(colors[0]);

  for (size_t i = 0; i < text.size(); ++i) {
    std::cout << colors[i % colorCount] << text[i];
  }
  std::cout << rang::style::reset << std::endl;
}


int main() {
  printRainbowBanner("Welcome to Rang Library!");
  return 0;
}
