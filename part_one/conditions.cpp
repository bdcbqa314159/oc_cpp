#include <iostream>

int main(){


    int toleranceLevel = 5;

    std::cout<<"Enter your tolerance level : ";
    std::cin>>toleranceLevel;

    if (toleranceLevel < 0 || toleranceLevel > 10){
        std::cout<<"bad tolerance level, the level is within [0;10]"<<std::endl;
    }

    else if (toleranceLevel <= 3)
    {
        std::cout<<"[0;3] is low tolerance level"<<std::endl;
    }

    else if (toleranceLevel <= 7)
    {
        std::cout<<"[4;7] is medium tolerance level"<<std::endl;
    }

    else
    {
        std::cout<<"[8;10] is high tolerance level"<<std::endl;
    }

    int choice = 2;

    switch (choice)
    {
    case 1:
        std::cout<<"You chose 1"<<std::endl;
        break;
    case 2:
        std::cout<<"You chose 2"<<std::endl;
        break;
    case 3:
        std::cout<<"You choose 3"<<std::endl;
        break;
    default:
        std::cout<<"You chose something else"<<std::endl;
        break;
    }

    return 0;
}
