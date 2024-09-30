#include <exception>
#include <iostream>
#include <stdexcept>
// #include <string>

int division(int a, int b) {
  if (b == 0)
    // throw std::string("ERREUR : Division par zéro !");
    throw std::domain_error("Division par zero");
  else
    return a / b;
}

int main() {
  int a = 5, b = 0;

  /*try {
    std::cout << a << " / " << b << " = " << division(a, b) << "\n";
  } catch (std::string const &chaine) {
    std::cerr << chaine << "\n";
  }*/

  try {
    std::cout << a << " / " << b << " = " << division(a, b) << "\n";
  } catch (std::exception const &e) {
    std::cerr << "ERREUR: " << e.what() << "\n";
  }

  return 0;
}
