#include <iostream>

#include "config.h"
#include "mathfunc.h"

int main(int argc, char const *argv[]) {
  int test = 5;

  std::cout << "Hello, from CMakePractice!" << std::endl;
  std::cout << "version " << CMakePractice_VERSION_MAJOR << "."
            << CMakePractice_VERSION_MINOR << std::endl;
  std::cout << "test = " << test << std::endl;

  const double value = pr::math::mysqrt(16);
  std::cout << "sqrt of 16 is " << value << std::endl;

  return 0;
}
