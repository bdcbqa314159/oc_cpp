#pragma once

#include <iostream>
#include <string>
#include "personnage.hpp"

class Guerrier : public Personnage
{
public:
    Guerrier() = default;
    Guerrier(std::string nom);
    void frapperAvecUnMarteau() const;
    void sePresenter() const;
};
