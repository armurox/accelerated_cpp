#include <iostream>

int five(void)
{
    return 5;
}

int main(void)
{
    int a{ 4 }; // Initialize a variable with the literal value 5
    int b{ 2 * 3 + 5 }; // Initialize a variable with the computed value 11
    int c{ b }; // Initialize a variable with the value of variable b, which is 11
    int d{ five() }; // Initialize a variable with the value of the function return value 5
    std::cout << a << " " << b << " " << c << " " << d << '\n';
    return 0;
}
