// Program for doubling an integer which does not work as expected
#include <iostream>

void get_value_from_user(void)
{
    int x{};
    std::cout << "Please enter an integer: ";
    std::cin >> x;
}

int main(void)
{
    get_value_from_user();
    int num{};
    std::cout << num << " double is " << 2 * num << '\n';
    return 0;
}
