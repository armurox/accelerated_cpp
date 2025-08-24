// Program to get a user's name and print it back to them
#include <iostream>
#include <string>

int main(void)
{
    std::string name{};
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << '\n';
    return 0;
}
