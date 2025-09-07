/*
Program that illustrates unsigned int modulo wrapping, using 2 byte short unsigned ints
*/
#include <iostream>

int main(void)
{
    unsigned short x{ 65535 }; // Max value of a 2 byte unsigned short
    std::cout << "x was: " << x << '\n';
    
    x++;
    std::cout << "x is now: " << x << '\n';

    x++;
    std::cout << "x is now: " << x << '\n';   
}
