#include <iostream>

int main(){


    double euroUtilisateur{};
    double const EUR_USD = 1.20;

    std::cout<<"Convertisseur EUR -> USD"<<std::endl;

    std::cout<<"Entrez un montant en euros que vous voulez convertir en dollars : ";
    std::cin>>euroUtilisateur;

    while (euroUtilisateur < 0)
    {
        std::cout<<"Le montant doit être positif"<<std::endl;
        std::cout << "Entrez un montant en euros que vous voulez convertir en dollars : ";
        std::cin >> euroUtilisateur;
    }

    double usdUtilisateur = euroUtilisateur * EUR_USD;

    std::cout<<"Aujourd'hui, "<<euroUtilisateur<<" euros valent "<<usdUtilisateur<<" dollars"<<std::endl;

    return 0;
}
