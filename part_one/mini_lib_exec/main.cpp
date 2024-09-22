#include "math.hpp"
#include "timing.hpp"
#include <iostream>

int main() {

  std::cout << "Mini lib exec bundle" << std::endl;

  int a = 2;
  int result = ajouteDeux(a);

  std::cout << "the result is " << result << std::endl;

  std::cout << "Number of seconds: " << std::endl;
  int total = nombreDeSeconds(1, 1, 1);
  int total_1 = nombreDeSeconds();

  std::cout << "calling ... " << std::endl;

  std::cout << total << " and " << total_1 << std::endl;

  return 0;
}
