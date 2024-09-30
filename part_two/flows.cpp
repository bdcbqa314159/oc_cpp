#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

class Generer {
public:
  int operator()() const { return rand() % 10; }
};

int main() {

  std::cout << "Working with flows\n";

  std::ostream_iterator<double> it(std::cout, ", ");
  *it = 3.14;
  *it = 2.71;

  std::cout << "================\n\n";

  std::ifstream fichier("test_file");
  std::istream_iterator<double> my_it(fichier);

  double a, b;
  a = *my_it;
  ++it;
  b = *my_it;

  std::cout << a << " " << b << "\n";

  std::istream_iterator<double> my_it_1(fichier);
  std::istream_iterator<double> end;

  while (my_it_1 != end) {
    std::cout << *my_it_1 << std::endl;
    ++my_it_1;
  }

  std::vector<double> a_tab(10000, 0);
  std::istream_iterator<double> my_it_2(fichier);

  std::copy(my_it_2, end, a_tab.begin());

  std::cout << "==========\n\n";

  std::srand(time(0));
  std::vector<int> a_last_tab(100, -1);

  generate(a_last_tab.begin(), a_last_tab.end(), Generer());
  std::sort(a_last_tab.begin(), a_last_tab.end());
  std::copy(a_last_tab.begin(), a_last_tab.end(),
            std::ostream_iterator<int>(std::cout, "\n"));

  std::cout << "=================\n";

  std::vector<double> f_tab(10000, 0);
  std::istream_iterator<double> my_it_3(fichier);
  std::istream_iterator<double> my_it_end;

  std::back_insert_iterator<std::vector<double>> back_inserter(f_tab);

  std::copy(my_it_3, my_it_end, back_inserter);

  std::cout << "==================\n";

  std::ostringstream flux;
  flux << "Salut les ";
  flux << "champions!";

  std::string const phrase = flux.str();

  std::cout << phrase << "\n";

  std::string final_sentence("Pi vaut environ: ");
  double const pi(3.14159);
  std::ostringstream flux_1;

  flux_1 << final_sentence;
  flux_1 << pi;
  flux_1 << "\n";

  std::cout << flux_1.str() << "\n";

  return 0;
}
