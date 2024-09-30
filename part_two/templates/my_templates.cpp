#include "my_templates.hpp"

template <>
std::string my_max_function(const std::string &a, const std::string &b) {
  if (a.size() > b.size())
    return a;
  return b;
}
