// Program to get a number from a user and output it back to them
#include <iostream>

int main(void)
{
    int x{}; int y{};
    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> x >> y;
    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}
