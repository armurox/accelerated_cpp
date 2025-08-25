// Example program just to illustrate the difference between a literal and a variable
#include <iostream>

int main(void)
{
    std::cout << 5 << '\n'; // Print the value of a literal
    int x{ 5 };
    std::cout << x << '\n'; // Print the value of a variable
    x = 7; // Copy assigns variable to a new value
    std::cout << x << '\n'; // Print the updated value of the variable
    return 0;
}
