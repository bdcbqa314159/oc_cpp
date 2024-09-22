#include <iostream>
#include <string>

int main()
{
    std::string greeting{"Hello, World!"};
    std::string name{"John"};

    std::string message = greeting + " " + name + "!";

    std::cout << message << std::endl;

    return 0;
}