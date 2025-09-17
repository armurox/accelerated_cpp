// Program to illustrate a basic if statement
#include <iostream>

int main(void)
{
    int x{};
    std::cout << "Please enter an integer: ";
    std::cin >> x;
    if (x == 0)
        std::cout << "You entered 0!\n";
    return 0;
}
