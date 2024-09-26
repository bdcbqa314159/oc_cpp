#include "vehicles.hpp"
#include <iostream>

void Vehicule::affiche() const
{
  std::cout << "Ceci est un vehicule." << std::endl;
}

void Voiture::affiche() const
{
  std::cout << "Ceci est une voiture." << std::endl;
}

void Camion::affiche() const { std::cout << "Ceci est un camion" << std::endl; }

void Moto::affiche() const { std::cout << "Ceci est une moto." << std::endl; }

Vehicule::~Vehicule() { std::cout << "bye vehicule\n"; }

Voiture::~Voiture() { std::cout << "bye voiture\n"; }

Moto::~Moto() { std::cout << "bye moto\n"; }

Camion::~Camion() { std::cout << "bye camion\n"; }

void presenter(Vehicule const &v) { v.affiche(); }

void Garage::ajouter(Vehicule &v) { m_vehicules.push_back(v.clone()); }

void Garage::remove() { m_vehicules.pop_back(); }

void Garage::affiche() const
{
  for (int i = 0; i < m_vehicules.size(); ++i)
  {
    m_vehicules[i]->affiche();
  }
}

// Garage::~Garage() {}
Garage::~Garage()
{
  for (int i(0); i < m_vehicules.size(); ++i)
  {
    delete m_vehicules[i];
    m_vehicules[i] = 0;
  }
}
