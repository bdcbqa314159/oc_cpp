#include <iostream>

int main(){

    std::cout<<"boucle while"<<std::endl;
    int nombreTables = -1;

    while (nombreTables<0){
        std::cout<<"Entrez un nombre de tables : ";
        std::cin>>nombreTables;
    }

    std::cout<<"Vous avez "<<nombreTables<<" tables"<<std::endl;

    std::cout << "boucle do while" << std::endl;
    nombreTables = -1;

    do{
        std::cout<<"Entrez un nombre de tables : ";
        std::cin>>nombreTables;
    }while(nombreTables<0);

    std::cout << "Vous avez " << nombreTables << " tables" << std::endl;

    std::cout<<"boucle for"<<std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"i = "<<i<<std::endl;
    }

    return 0;
}
