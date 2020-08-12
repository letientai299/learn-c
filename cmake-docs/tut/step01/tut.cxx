// A simple program that computes the square root of a number
// Source:
// https://github.com/Kitware/CMake/blob/master/Help/guide/tutorial/Step1/tutorial.cxx
#include "tut_config.h"
#include <cmath>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << argv[0] << " version " << TUT_VERSION_MAJOR << "."
              << TUT_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
