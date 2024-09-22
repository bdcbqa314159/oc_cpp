#include <iostream>
#include <vector>

int main() {

  size_t const size = 3;
  std::vector<int> test(size);

  for (size_t i = 0; i < size; i++)
    test[i] = i + 1;

  for (size_t i = 0; i < size; i++)
    std::cout << test[i] << " ";

  std::cout << std::endl;

  return 0;
}
