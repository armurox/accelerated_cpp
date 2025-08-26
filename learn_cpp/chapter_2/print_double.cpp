#include <iostream>

int get_value_from_user(void);
void print_double(int num);

int main(void)
{
    print_double(get_value_from_user());
    return 0;
}

int get_value_from_user(void)
{
    int num{};
    std::cout << "Please enter an integer: ";
    std::cin >> num;
    return num;
}

void print_double(int num)
{
    std::cout << num << " doubled is " << 2 * num << '\n';
}
