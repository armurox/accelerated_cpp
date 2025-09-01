#include "io.h"
#include <iostream>

int readNumber(void)
{
    std::cout << "Please enter an integer: ";
    int num{};
    std::cin >> num;
    return num; 
}

void writeAnswer(int ans)
{
    std::cout << "The sum of your two entered integers is " << ans << '\n';
    return;
}