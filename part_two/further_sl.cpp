#include <algorithm>
#include <cctype>
#include <complex>
#include <iostream>
#include <string>
#include <valarray>

class Convertir {
public:
  char operator()(char c) const { return toupper(c); }
};

class Cosinus // Un foncteur pour le calcul du cosinus
{
public:
  int operator()(int x) const { return std::cos(x); }
};

int main() {

  std::cout << "Going further with the sl\n";

  std::string sentence("Hello everyone!");
  std::transform(sentence.begin(), sentence.end(), sentence.begin(),
                 Convertir());
  std::cout << sentence << "\n";

  std::cout << "=========\n";

  size_t const size(10);
  int tableau[size] = {34, 1, 2, 67, 23, 12, 90, 2, 9, 7};
  int *start(tableau), *end(tableau + size);
  std::sort(start, end);
  for (size_t i = 0; i < size; ++i)
    std::cout << tableau[i] << ", ";
  std::cout << "\n";

  std::cout << "=========\n";

  std::complex<int> c(2, 3);
  std::cout << c << "\n";

  std::cout << "=========\n";

  std::valarray<int> a(10, 5), b(8, 5);
  std::valarray<int> result = a + b;

  std::valarray<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  v = v.apply([](int n) -> int { return std::round(std::tgamma(n + 1)); });

  return 0;
}
