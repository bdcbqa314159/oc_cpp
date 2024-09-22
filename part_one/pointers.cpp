#include <iostream>
#include <string>

int main() {

  std::string repA, repB, repC;

  repA = "reponse A";
  repB = "reponse B";
  repC = "reponse C";

  std::cout << "Ceci est une question, voici les reponses possibles:"
            << std::endl;

  std::cout << "A) " << repA << std::endl;

  std::cout << "B) " << repB << std::endl;
  std::cout << "C) " << repC << std::endl;

  char reponse(0);
  std::cout << "Reponse >> ";
  std::cin >> reponse;

  std::string *reponseClient = nullptr;
  switch (reponse) {
  case 'A':
    reponseClient = &repA;
    break;
  case 'B':
    reponseClient = &repB;
    break;
  case 'C':
    reponseClient = &repC;
    break;
  default:
    break;
  }

  std::cout << "you choose: " << *reponseClient << std::endl;

  return 0;
}
