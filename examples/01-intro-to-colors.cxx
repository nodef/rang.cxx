#include <rang.hpp>
#include <iostream>


int main() {
  std::cout << rang::fg::red << "Error: Something went wrong!"
            << rang::style::reset << std::endl;
  std::cout << rang::fg::green << "Success: Operation completed successfully!"
            << rang::style::reset << std::endl;
  std::cout << rang::fg::blue << "Info: Please check the logs for details."
            << rang::style::reset << std::endl;
  return 0;
}
