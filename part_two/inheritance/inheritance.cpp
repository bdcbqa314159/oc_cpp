#include <iostream>
#include "personnage.hpp"
#include "guerrier.hpp"

int main()
{
    std::cout << "Working with inheritance\n";

    Personnage david("David");
    david.sePresenter();

    Guerrier richard("Richard");
    richard.sePresenter();

    return 0;
}