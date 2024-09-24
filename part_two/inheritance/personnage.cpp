#include "personnage.hpp"

Personnage::Personnage(std::string nom) : m_nom(nom)
{
}

void Personnage::recevoirDegats(int degats)
{
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void Personnage::sePresenter() const
{
    std::cout << "Je m'appelle " << m_nom << " et j'ai " << m_vie << " points de vie." << std::endl;
}