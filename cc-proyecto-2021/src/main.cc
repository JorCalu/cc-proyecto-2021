#include<iostream>
#include "rifate.hh"

int main()
{
    int number{5};

    std::cout << SayHello ("jorgito")<< std::endl;
    dosomething();
    std::cout << Add(1, 1) << std::endl;
    PrintAdd(2, 3);
    std::cout << number << std::endl;
    AddOneByRef(number);
    std::cout << number << std::endl;
    std::cin.get();
    return 0;
}