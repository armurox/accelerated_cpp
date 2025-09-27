// Program to illustrate the use and behaviour of std::getline with std::string
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name);

    int number{};
    std::cout << "Enter your favorite number: ";
    std::cin >> number;

    std::string color{};
    std::cout << "Enter your favorite color: ";
    std::getline(std::cin >> std::ws, color);
    std::cout << "Your full name is " << name << '\n' << "And your favorite color is " << color << '\n';

    return 0;
}
