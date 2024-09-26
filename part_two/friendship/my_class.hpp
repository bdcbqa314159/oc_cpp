#pragma once
#include <iostream>

class MyInt {

public:
  MyInt() = default;
  MyInt(int number) : m_value(number) {}

  friend std::ostream &operator<<(std::ostream &os, MyInt const &obj);

private:
  int m_value{};
};
