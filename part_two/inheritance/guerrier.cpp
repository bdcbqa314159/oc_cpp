#include "guerrier.hpp"

Guerrier::Guerrier(std::string nom) : Personnage(nom)
{
}

void Guerrier::frapperAvecUnMarteau() const
{
    std::cout << "Frappe avec un marteau !\n";
}

void Guerrier::sePresenter() const
{
    Personnage::sePresenter();
    std::cout << "Je suis un guerrier redoutable.\n";
}