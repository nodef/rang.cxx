#include <rang.hpp>
#include <iostream>


void logError(const std::string &message) {
  std::cout << rang::fg::red << "[ERROR] " << message << rang::style::reset
            << std::endl;
}

void logWarning(const std::string &message) {
  std::cout << rang::fg::yellow << "[WARNING] " << message << rang::style::reset
            << std::endl;
}

void logInfo(const std::string &message) {
  std::cout << rang::fg::blue << "[INFO] " << message << rang::style::reset
            << std::endl;
}


int main() {
  logError("File not found.");
  logWarning("Low disk space.");
  logInfo("Application started.");
  return 0;
}
