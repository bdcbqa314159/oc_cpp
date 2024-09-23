#pragma once

#include <string>
#include <iostream>

class Arme
{

public:
    Arme() = default;
    Arme(std::string nomArme, int degatsArme);
    void changer(std::string nomNouvelleArme, int degatsNouvelleArme);
    void afficher() const;

private:
    std::string _nom = "epee rouillee";
    int _degats{10};
};