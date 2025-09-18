// Program to illustrate the usage of get with std::cin to show that whitespace characters can be read in
#include <iostream>

int main(void)
{
    std::cout << "Please enter a keyboard character: ";
    char ch{};
    std::cin.get(ch);  // This will take in any whitespace also
    std::cout << "You entered: " << ch << '\n';
    std::cin.get(ch);
    std::cout << "You entered: " << ch << '\n';
}
