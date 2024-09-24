#pragma once

#include <iostream>
#include <string>

class Personnage
{
public:
    Personnage() = default;
    Personnage(std::string nom);
    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible) const;

    void sePresenter() const;

protected:
    int m_vie{100};
    std::string m_nom;
};