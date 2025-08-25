// Program that requests an integer from a user and then doubles it
#include <iostream>

int main(void)
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double " << x << " is: " << 2 * x << '\n';
    std::cout << "Tripe " << x << " is: " << 3 * x << '\n';
    return 0;
}
