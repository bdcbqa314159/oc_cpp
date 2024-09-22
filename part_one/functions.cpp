#include <iostream>
#include <ostream>

int addition(int, int);

int multiplication(int, int, int);

int carre(int);

int main() {
  std::cout << "functions " << std::endl;

  int sum = addition(1, 2);

  int product = multiplication(1, 2, 3);

  std::cout << "Results:" << std::endl;

  std::cout << sum << std::endl;

  std::cout << product << std::endl;

  std::cout << "Test function carre" << std::endl;

  int number = 0;
  std::cout << "entre un nombre >>> ";
  std::cin >> number;
  std::cout << number << "*" << number << " = " << carre(number) << std::endl;

  return 0;
}

int addition(int a, int b) { return a + b; }

int multiplication(int a, int b, int c) { return a * b * c; }

int carre(int a) { return a * a; }
