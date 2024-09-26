#pragma once

#include <string>

#include "arme.hpp"

class Personnage {
public:
  Personnage() = default;
  Personnage(std::string nom);
  Personnage(std::string nomArme, int degatsArme, std::string nom);

  Personnage(Personnage const &other);
  Personnage &operator=(Personnage const &other);

  ~Personnage();

  void recevoirDegats(int nbDegats);

  void attaquer(Personnage &cible);
  void boirePotionDeVie(int quantitePotion);

  void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

  bool estVivant() const;

  void afficherEtat() const;

private:
  int _vie{100}, _mana{100};
  Arme *_monArme{nullptr};
  std::string _nom = "no_name";
};
