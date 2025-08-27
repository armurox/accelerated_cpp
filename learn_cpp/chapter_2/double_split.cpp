#include <iostream>

int get_number_from_user(void)
{
    std::cout << "Please enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}