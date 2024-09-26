#include "my_class.hpp"
#include <iostream>

int main() {
  std::cout << "Working with static stuff\n";
  std::string special_id = "my_id_is_special";

  Object an_object;
  Object another_one(special_id);

  {
    std::cout << "we have: " << Object::giveCounter()
              << " current instances.\n";
    Object a_last_one;

    std::cout << "we have: " << Object::giveCounter()
              << " current instances.\n";
  }
  std::cout << "we have: " << Object::giveCounter() << " current instances.\n";

  return 0;
}
