#include "personnage.hpp"

Personnage::Personnage(std::string nomArme, int degatsArme) : _monArme(nomArme), _degatsArme(degatsArme)
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    _vie -= nbDegats;

    if (_vie < 0)
        _vie = 0;
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    _vie += quantitePotion;

    if (_vie > 100)
        _vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    _monArme = nomNouvelleArme;
    _degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() const
{
    return _vie > 0;
}