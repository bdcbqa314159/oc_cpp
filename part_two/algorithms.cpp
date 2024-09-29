#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <iostream>
#include <list>
#include <string>
#include <vector>

class Remplir {

public:
  Remplir() = default;
  Remplir(int i) : m_valeur(i) {}

  int operator()() {
    ++m_valeur;
    return m_valeur;
  }

private:
  int m_valeur{};
};

class Generer {
public:
  int operator()() const { return rand() % 10; }
};

class TestVoyelles {
public:
  bool operator()(std::string const &chaine) const {
    for (size_t i = 0; i < chaine.size(); ++i) {
      switch (chaine[i]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'y':
        return true;
      default:
        break;
      }
    }
    return false;
  }
};

class ComparaisonLongueur {
public:
  bool operator()(const std::string &a, const std::string &b) {
    return a.length() < b.length();
  }
};

class Afficher {
public:
  void operator()(int a) const { std::cout << a << "\n"; }
};

class Sommer {
public:
  Sommer() = default;

  void operator()(int n) { m_somme += n; }

  int resultat() const { return m_somme; }

private:
  int m_somme{};
};

int main() {

  std::cout << "working with algorithms\n";

  std::vector<int> my_tab(10, 0);
  Remplir f(0);

  std::generate(my_tab.begin(), my_tab.end(), f);

  std::vector<int> tab(1000, 0);
  Remplir g(0);

  std::generate(tab.begin(), tab.begin() + 10, g);
  std::generate(tab.end() - 5, tab.end(), g);

  Remplir h(0);
  std::list<int> my_list;

  std::generate(my_list.begin(), my_list.end(), h);

  std::cout << "==========\n";

  srand(time(0));

  std::vector<int> vec(100, -1);
  std::generate(vec.begin(), vec.end(), Generer());
  int const compteur = std::count(vec.begin(), vec.end(), 5);
  std::cout << "Il y a " << compteur << " elements valant 5\n";

  std::vector<std::string> sentence = {"noname", "lion", "funk", "credit"};

  int const compteur_1 =
      std::count_if(sentence.begin(), sentence.end(), TestVoyelles());

  std::cout << "==========\n";
  std::string sentence_1 = "ldajflajdgoijavnllkajdfpajaewgldn";
  auto it_find = std::find(sentence_1.begin(), sentence_1.end(), 'a');
  bool ans = it_find == sentence_1.end();

  std::cout << "Letter a found? " << ans << "\n";

  std::vector<int> another_tab(100, -1);
  std::generate(another_tab.begin(), another_tab.end(), Generer());

  std::sort(another_tab.begin(), another_tab.end());

  for (auto it = another_tab.begin(); it != another_tab.end(); ++it)
    std::cout << *it << ", ";

  std::cout << "\n";

  std::vector<std::string> words = {"puma", "tomato", "potato",
                                    "lion", "boy",    "child"};
  std::sort(words.begin(), words.end(), ComparaisonLongueur());

  std::cout << "==========\n";

  std::vector<int> final_tab(20, -1);
  std::generate(final_tab.begin(), final_tab.end(), Generer());
  std::sort(final_tab.begin(), final_tab.end());
  std::for_each(final_tab.begin(), final_tab.end(), Afficher());

  std::cout << "==========\n";

  std::vector<int> sum_tab(100, -1);
  std::generate(sum_tab.begin(), sum_tab.end(), Generer());

  Sommer somme;

  somme = for_each(tab.begin(), tab.end(), somme);

  std::cout << "La somme des elements generes est : " << somme.resultat()
            << "\n";

  std::vector<double> a(50, 1.2), b(50, 2.3), c(50, 0);

  std::transform(a.begin(), a.end(), b.begin(), c.begin(), std::plus<double>());

  return 0;
}
