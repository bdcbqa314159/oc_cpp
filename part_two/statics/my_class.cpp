#include "my_class.hpp"

int Object::counter = 0;

Object::Object() { ++counter; }

Object::Object(const std::string &id) : my_id(id) { ++counter; }

Object::~Object() { --counter; }

int Object::giveCounter() { return counter; }
