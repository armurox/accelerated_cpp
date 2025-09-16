// Program to illustrate the boolean values are integral types, shown by what they print
#include <iostream>

int main(void)
{
    std::cout << true << '\n'; // Evaluates to 1
    std::cout << !true << '\n'; // Evaluates to 0
    
    bool b{ false };
    std::cout << b << '\n'; // Evaluates to 0

    std::cout << std::boolalpha; // Manipulates std::cout to print out true and false
    std::cout << b << '\n'; // Now this will print false

    std::cout << std::noboolalpha; // Back to printing an integer
    std::cout << b << '\n'; // Will print 0 again
    return 0;
}
