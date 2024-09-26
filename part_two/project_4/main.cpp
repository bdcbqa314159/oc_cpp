#include "figure.hpp"
#include <iostream>

int main() {

  std::cout << "project no. 4\n";

  Cercle my_cercle(2.);
  Carre my_carre(3.);

  Figures my_figures;

  my_figures.ajouter(my_cercle);
  my_figures.ajouter(my_carre);

  my_figures.afficher();

  return 0;
}
