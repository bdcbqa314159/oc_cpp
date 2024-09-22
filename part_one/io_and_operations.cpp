#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
    int ageUtilisateur{};
    std::string prenomUtilisateur{};
    double pi{};

    std::cout << "Quel âge avez-vous ? ";
    std::cin >> ageUtilisateur;


    std::cin.ignore();

    std::cout << "Comment vous appelez-vous ? ";
    std::getline(std::cin, prenomUtilisateur);

    std::cout<<"Combien vaut pi ? ";
    std::cin>>pi;

    std::cout << "Vous avez " << ageUtilisateur << " ans." << std::endl;
    std::cout << "Vous vous appelez " << prenomUtilisateur << "." << std::endl;
    std::cout << "selon vous, pi vaut " << pi << std::endl;

    std::cout<<"Very useless stuff"<<std::endl;

    int a  = 3, b = 1;
    std::cout<<"a = "<<a<<", b = "<<b<<std::endl;
    std::cout<<"b va dans a"<<std::endl;
    a = b;
    std::cout<<"a = "<<a<<", b = "<<b<<std::endl;

    int resultat = a+b;
    std::cout<<"a + b = "<<resultat<<std::endl;

    int const nombreNiveaux = 5;

    std::cout<<"Vous avez "<<nombreNiveaux<<" vies."<<std::endl;
    std::cout<<"Et ce ne changera jamais."<<std::endl;


    return 0;
}
