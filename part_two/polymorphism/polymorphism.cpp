#include "vehicles.hpp"
#include <iostream>
#include <sys/wait.h>
#include <vector>

int main() {
  // Vehicule v;
  // presenter(v);

  Moto m;
  presenter(m);

  std::vector<Vehicule *> listeVehicules;

  listeVehicules.push_back(new Voiture(15000, 5));
  listeVehicules.push_back(new Voiture(12000, 3));
  listeVehicules.push_back(new Moto(2000, 212.5));

  for (int i = 0; i < listeVehicules.size(); ++i) {
    listeVehicules[i]->affiche();
  }

  for (int i(0); i < listeVehicules.size(); ++i) {
    delete listeVehicules[i];
    listeVehicules[i] = 0;
  }

  std::cout << "Garage - bit" << std::endl;

  Garage my_garage;

  // my_garage.ajouter(v);
  my_garage.ajouter(m);
  Camion camion(10000, 5);
  my_garage.ajouter(camion);

  my_garage.affiche();

  return 0;
}
