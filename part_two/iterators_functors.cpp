#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
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

class TestVoyelles {
public:
  bool operator()(std::string const &chaine) const {
    for (int i(0); i < chaine.size(); ++i) {
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

class CompareLongueur {
public:
  bool operator()(const std::string &a, const std::string &b) {
    return a.length() < b.length();
  }
};

int main() {

  std::cout << "iterators and functors\n";

  std::cout << "iterators section\n";
  std::cout << "======> vectors and iterators\n";
  std::vector v = {1, 2, 3, 4, 5};

  for (auto it = v.begin(); it != v.end(); ++it)
    std::cout << *it << ", ";
  std::cout << "\n";

  std::cout << "\n\n";

  std::cout << "======> deques and iterators\n";
  std::deque<int> d = {1, 2, 3, 4, 5};

  for (auto it = d.begin(); it != d.end(); ++it)
    std::cout << *it << ", ";
  std::cout << "\n";

  std::cout << "======> iterators and some special functions\n";

  std::vector<std::string> tab; // Un tableau de mots

  tab.push_back("les"); // On ajoute deux mots dans le tableau
  tab.push_back("Developpeurs");

  tab.insert(tab.begin(), "Salut"); // On insère le mot "Salut" au début

  // Affiche les mots donc la chaîne "Salut les Developpeurs"
  for (std::vector<std::string>::iterator it = tab.begin(); it != tab.end();
       ++it) {
    std::cout << *it << " ";
  }

  tab.erase(tab.begin()); // On supprime le premier mot

  // Affiche les mots donc la chaîne "les Developpeurs"
  for (std::vector<std::string>::iterator it = tab.begin(); it != tab.end();
       ++it) {
    std::cout << *it << " ";
  }

  std::cout << "\n\n";
  std::cout << "lists and iterators\n";
  std::list<int> liste;
  liste.push_back(5);
  liste.push_back(8);
  liste.push_back(7);

  for (std::list<int>::iterator it = liste.begin(); it != liste.end(); ++it) {
    std::cout << *it << std::endl;
  }

  std::cout << "\n\n";

  std::cout << "maps and iterators\n";
  std::map<std::string, double> poids;

  poids["souris"] = 0.05;
  poids["tigre"] = 200;
  poids["chat"] = 3;
  poids["elephant"] = 10000;

  for (std::map<std::string, double>::iterator it = poids.begin();
       it != poids.end(); ++it) {
    std::cout << it->first << " pese " << it->second << " kg." << std::endl;
  }
  std::string key = "chien";
  auto it_find = poids.find(key);
  bool answer = it_find == poids.end();
  std::cout << "Is the key: " << key << " in the map " << answer << "\n";

  std::cout << "\n\n";

  std::cout << "functors section\n";

  std::vector<int> a_tab(10, 0); // Un tableau de 100 cases valant toutes 0

  Remplir f(0);

  for (auto it = a_tab.begin(); it != a_tab.end(); ++it) {
    *it = f();
  }

  for (auto element : a_tab)
    std::cout << element << ", ";
  std::cout << "\n";

  std::plus<int> my_functor;

  int a = 1, b = 3;
  std::cout << a << " + " << b << " = " << my_functor(a, b) << "\n";

  std::map<std::string, double, CompareLongueur> a_poids;

  poids["souris"] = 0.05;
  poids["tigre"] = 200;
  poids["chat"] = 3;
  poids["elephant"] = 10000;

  for (std::map<std::string, double>::iterator it = poids.begin();
       it != poids.end(); ++it)
    std::cout << it->first << " pese " << it->second << " kg." << "\n";

  return 0;
}
