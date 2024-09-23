#include <iostream>
#include "duree.hpp"

int main()
{
    std::cout << "Working with operators\n";

    Duree duree1(0, 10, 28), duree2(0, 15, 2);

    std::cout << "duree1: " << duree1 << " et " << "duree2: " << duree2 << "\n";

    return 0;
}