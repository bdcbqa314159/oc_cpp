#include <iostream>
#include <cmath>

int main(){


    int my_test = 23;

    std::cout<<"my_test = "<<my_test<<std::endl;

    my_test++;
    std::cout << "my_test after my_test++ = " << my_test << std::endl;

    ++my_test;
    std::cout << "my_test after ++my_test = " << my_test << std::endl;

    std::cout<<"doing my_test++ right away: "<<my_test++<<std::endl;
    std::cout<<"my_test after my_test++: "<<my_test<<std::endl;

    std::cout << "doing ++my_test right away: " << ++my_test << std::endl;
    std::cout << "my_test after ++my_test: " << my_test << std::endl;

    std::cout<<"=== playing with a^b ==="<<std::endl;
    int a = 2, b = 3;
    std::cout<<"a = "<<a<<", b = "<<b<<std::endl;
    std::cout<<"a^b = "<<std::pow(a,b)<<std::endl;

    return 0;
}
