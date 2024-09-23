#include "personnage.hpp"

Personnage::Personnage(std::string nom) : _nom(nom)
{
}

Personnage::Personnage(std::string nomArme, int degatsArme, std::string nom) : _nom(nom)
{
    _monArme = new Arme(nomArme, degatsArme);
}

Personnage::Personnage(Personnage const &other) : _vie(other._vie), _mana(other._mana), _nom(other._nom)
{
    _monArme = new Arme(*other._monArme);
}

Personnage &Personnage::operator=(Personnage const &other)
{
    if (this != &other)
    {
        _vie = other._vie;
        _mana = other._mana;
        _nom = other._nom;
        delete _monArme;
        _monArme = new Arme(*other._monArme);
    }
    return *this;
}

void Personnage::recevoirDegats(int nbDegats)
{
    _vie -= nbDegats;

    if (_vie < 0)
        _vie = 0;
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(_monArme->getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    _vie += quantitePotion;

    if (_vie > 100)
        _vie = 100;
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    _monArme->changer(nomNouvelleArme, degatsNouvelleArme);
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
    _monArme->afficher();
}

Personnage::~Personnage()
{
    delete _monArme;
}