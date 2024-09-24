#pragma once

#include <iostream>
#include <string>
#include "personnage.hpp"

class Magicien : public Personnage
{
public:
    Magicien() = default;
    Magicien(std::string nom);
    void bouleDeFeu() const;
    void bouleDeGlace() const;

private:
    int m_mana{100};
};
