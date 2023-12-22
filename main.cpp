#include "config.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  int test = 5;

  std::cout << "Hello, from CMakePractice!" << std::endl;
  std::cout << "version " << CMakePractice_VERSION_MAJOR << "." << CMakePractice_VERSION_MINOR << std::endl;
  std::cout << "test = " << test << std::endl;

  return 0;
}
