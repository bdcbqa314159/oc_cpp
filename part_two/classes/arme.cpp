#include "arme.hpp"

Arme::Arme(std::string nomArme, int degatsArme) : _nom(nomArme), _degats(degatsArme)
{
}

void Arme::changer(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    _nom = nomNouvelleArme;
    _degats = degatsNouvelleArme;
}

void Arme::afficher() const
{
    std::cout << "Arme : " << _nom << " (Dégâts : " << _degats << ")" << std::endl;
}

int Arme::getDegats() const
{
    return _degats;
}
