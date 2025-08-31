#include "add.h"
#include <iostream>

int main(void)
{
    int x{}, y{};
    std::cout << "Please enter two integers: ";
    std::cin >> x >> y;
    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << '\n';
    return 0;
}
