#pragma once

#include <string>

class Object {
public:
  Object();
  Object(const std::string &id);
  ~Object();

  static int giveCounter();

private:
  std::string my_id;
  static int counter;
};
