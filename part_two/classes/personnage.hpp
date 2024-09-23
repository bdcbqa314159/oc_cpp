#pragma once

#include <string>
#include <iostream>

#include "arme.hpp"

class Personnage
{
public:
    Personnage() = default;
    Personnage(std::string nom);
    Personnage(std::string nomArme, int degatsArme, std::string nom);
    Personnage(Personnage const &) = default;

    ~Personnage() = default;

    void recevoirDegats(int nbDegats);

    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

    bool estVivant() const;

    void afficherEtat() const;

private:
    int _vie{100}, _mana{100}, _degatsArme{10};
    Arme _monArme{};
    std::string _nom = "no_name";
};