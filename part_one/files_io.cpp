#include <fstream>
#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {

  std::cout << "hello fstream" << std::endl;

  std::string const filename("test.txt");

  std::ofstream monFlux(filename.c_str());

  if (monFlux) {
    monFlux << "hello les nazes" << std::endl;
    monFlux << 12.34 << std::endl;
    int age = 12;
    monFlux << "j ai " << age << " ans" << std::endl;
  }

  else {

    std::cout << "ERROR: Impossible d ouvrir le fichier" << std::endl;
    return 1;
  }

  {
    std::ifstream reading_file(filename);

    if (reading_file) {

      std::string line;
      while (getline(reading_file, line)) {
        std::cout << line << std::endl;
      }

    }

    else {
      std::cout << "ERROR: Impossible d ouvrir le fichier" << std::endl;
      return 1;
    }
  }

  std::ifstream reading_file(filename);
  if (reading_file) {

    reading_file.seekg(0, std::ios::end);
    size_t size = reading_file.tellg();

    std::cout << "le fichier est de taille: " << size << " octets" << std::endl;

  }

  else {
    std::cout << "ERROR: Impossible d ouvrir le fichier" << std::endl;
    return 1;
  }

  return 0;
}
