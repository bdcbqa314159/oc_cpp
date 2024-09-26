#include "my_class.hpp"
#include <iostream>

int main() {

  std::cout << "working with friendship.\n";

  MyInt zero, one(1), two(2);

  std::cout << "The values of the objects are:\n";
  std::cout << zero << " " << one << " " << " " << two << "\n";

  return 0;
}
