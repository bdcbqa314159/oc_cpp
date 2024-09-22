#include <iostream>
#include "personnage.hpp"

int main()
{
    Personnage david, goliath("epee aiguisée", 20);

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);

    goliath.changerArme("double hache", 40);
    goliath.attaquer(david);

    return 0;
}