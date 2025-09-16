// Program that illustrates the use of std::boolalpha for input and output.
#include <iostream>

int main(void)
{
    bool b{};
    std::cout << "Enter a boolean value: ";

    // Allow the user to input 'true' or 'false' for boolean values (note that they can no longer do integers)
    std::cin >> std::boolalpha;
    std::cin >> b;

    // Output true or false
    std::cout << std::boolalpha;
    std::cout << b << '\n';
}
