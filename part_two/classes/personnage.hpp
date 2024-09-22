#pragma once

#include <string>

class Personnage
{
public:
    Personnage() = default;
    Personnage(std::string nomArme, int degatsArme);
    Personnage(Personnage const &) = default;

    ~Personnage() = default;

    void recevoirDegats(int nbDegats);

    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

    bool estVivant() const;

private:
    int _vie{100}, _mana{100}, _degatsArme{10};
    std::string _monArme = "epee rouillee";
};