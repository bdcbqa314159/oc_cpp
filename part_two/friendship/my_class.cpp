#include "my_class.hpp"

std::ostream &operator<<(std::ostream &os, MyInt const &obj) {
  os << obj.m_value;
  return os;
}
