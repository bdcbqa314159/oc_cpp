#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {

  std::cout << "Working with the standard library\n";

  std::cout << "======> cmath \n";
  double a(4.3), b(5.2);
  std::cout << pow(a, b) << "\n";
  std::cout << sqrt(b) << "\n";
  std::cout << cos(a) << "\n";

  std::cout << "======> cctype\n";
  char c('2');
  std::cout << "is " << c << " a digit? " << isdigit(c);

  std::string phrase("il fait beau et chaud");
  std::cout << "original:\n" << phrase << "\n";
  for (char &s : phrase)
    toupper(s);
  std::cout << "post process:\n" << phrase << "\n";

  std::cout << "======> ctime\n";

  int secondes = time(0);
  std::cout << "since 1970-01-01, we have " << secondes << " seconds\n";

  std::cout << "======> cstdlib\n";

  srand(time(0));
  for (size_t i = 0; i < 10; ++i)
    std::cout << rand() % 10 << "\n";

  return 0;
}
