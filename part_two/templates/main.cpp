#include "my_templates.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {

  std::cout << "Working with templates\n";

  std::cout << "very basic example - the max function:\n";

  std::cout << my_max_function(1, 2) << "\n";
  std::cout << my_max_function(3.456, 0.123) << "\n";

  std::cout << "=============================\n";

  int tab[5] = {1, 34, 10, 20, 2};
  // Remplissage du tableau

  std::cout << "Moyenne : " << moyenne<int, double>(tab, 5) << "\n";

  std::cout << "=============================\n";
  Rectangle<double> monRectangle(1.0, 4.5, 3.1, 5.2);

  std::cout << monRectangle.hauteur() << "\n";

  std::cout << "final note\n";
  enum Level { Easy, Medium, Hard };

  typedef std::vector<std::string>::iterator my_iterator_vec;

  return 0;
}
