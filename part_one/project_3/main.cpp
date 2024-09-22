#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

void melangerLettres(std::string *);

int main() {

  std::string motMystere, motUtilisateur;
  std::string *motMelange = nullptr;

  std::cout << "Saisissez un mot a l abri des regards : ";
  std::cin >> motMystere;

  motMelange = new std::string(motMystere);
  melangerLettres(motMelange);

  while (motMystere != motUtilisateur) {
    std::cout << "Quel est ce mot ? " << *motMelange << std::endl;

    std::cin >> motUtilisateur;

    if (motMystere == motUtilisateur)
      std::cout << "Bravo !" << std::endl;
    else
      std::cout << "Ce n est pas le mot" << std::endl;
  }

  delete motMelange;
  motMelange = nullptr;

  return 0;
}

void melangerLettres(std::string *mot) {

  std::string melange;
  int position = 0;

  std::cout << *mot << std::endl;

  while (mot->size() != 0) {
    position = rand() % mot->size();
    melange += mot->at(position);
    mot->erase(position, 1);
  }

  *mot = melange;
}
