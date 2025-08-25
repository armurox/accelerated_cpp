// Program that asks a user to enter two numbers, and states what its sum and difference is
#include <iostream>

int main(void)
{
    int x{};
    int y{};
    std::cout << "Enter and integer: ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;
    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";
    return 0;
}
