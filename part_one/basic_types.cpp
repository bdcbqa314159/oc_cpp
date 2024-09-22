#include <iostream>
#include <string>

int main(int argc, const char*argv[]){

    int ageUtilisateur(16), qiUtilisateur(150);
    std::string prenomUtilisateur("John");


    std::cout << "Vous avez " << ageUtilisateur << " ans." << std::endl;
    std::cout << "Vous vous appelez " << prenomUtilisateur << "." << std::endl;
    std::cout << "Votre QI est de " << qiUtilisateur << "." << std::endl;


    std::cout<<"References"<<std::endl;

    int& ageUtilisateurRef(ageUtilisateur);
    std::cout<<"Vous avez "<<ageUtilisateurRef<<" ans. (via reference)"<<std::endl;

    ageUtilisateurRef=42;

    std::cout<<"Vous avez "<<ageUtilisateur<<" ans. (via variable)"<<std::endl;
    std::cout << "Vous avez " << ageUtilisateurRef << " ans. (via reference)" << std::endl;

    return 0;
}
