#include <rang.hpp>
#include <chrono>
#include <iostream>
#include <thread>


void printProgressBar(int progress, int total) {
  int barWidth = 50;
  float percentage = (float)progress / total;
  int pos = barWidth * percentage;

  std::cout << rang::fg::green << "[";
  for (int i = 0; i < barWidth; ++i) {
    if (i < pos)
      std::cout << "=";
    else if (i == pos)
      std::cout << ">";
    else
      std::cout << " ";
  }
  std::cout << "] " << int(percentage * 100.0) << "%" << rang::style::reset
            << "\r";
  std::cout.flush();
}


int main() {
  int total = 100;
  for (int i = 0; i <= total; ++i) {
    printProgressBar(i, total);
    std::this_thread::sleep_for(std::chrono::milliseconds(50));
  }
  std::cout << std::endl;
  return 0;
}
