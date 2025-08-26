#include <iostream>

int get_input_from_user(void)
{
    int x{};
    std::cout << "Please enter an integer: ";
    std::cin >> x;
    return x;
}

int main(void)
{
    int num{ get_input_from_user() };
    std::cout << num << " doubled is " << 2 * num << '\n';
    return 0;
}
