#include "personnage.hpp"

Personnage::Personnage(std::string nom) : _nom(nom)
{
}

Personnage::Personnage(std::string nomArme, int degatsArme, std::string nom) : _monArme(nomArme, degatsArme), _nom(nom)
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
    _monArme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
    return _vie > 0;
}

void Personnage::afficherEtat() const
{
    std::cout << "Nom : " << _nom << std::endl;
    std::cout << "Vie : " << _vie << std::endl;
    std::cout << "Mana : " << _mana << std::endl;
    std::cout << "Dégâts de l'arme : " << _degatsArme << std::endl;
    _monArme.afficher();
}