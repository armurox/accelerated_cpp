// Program that gets sum up the number of characters in a users name (including spaces) and their age
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your age + the length of your name is " << name.length() + age << '\n';
}
