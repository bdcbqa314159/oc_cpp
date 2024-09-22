#include <iostream>

int main(){

    int nombre_1 = 0, nombre_2 = 0;

    std::cout<<"Entrez un premier nombre : ";
    std::cin>>nombre_1;

    std::cout<<"Entrez un second nombre : ";
    std::cin>>nombre_2;

    int resultat = nombre_1 + nombre_2;

    std::cout<<"Le resultat de l'addition de "<<nombre_1<<" et "<<nombre_2<<" est "<<resultat<<std::endl;


    return 0;
}
