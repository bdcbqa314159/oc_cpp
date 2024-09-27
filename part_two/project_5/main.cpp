#include "fraction.hpp"
#include <iostream>

int main() {

  std::cout << "working with fractions\n";

  Fraction a(4, 5);

  Fraction b(2);

  Fraction c;

  c = a * b;

  std::cout << a << " * " << b << " = " << c << "\n";

  if (a == b)
    std::cout << "a est egal a b." << "\n";

  else
    std::cout << "a n’est pas egal a b." << "\n";

  return 0;
}
