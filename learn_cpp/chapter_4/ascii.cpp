// Simple program that asks a user to enter a single character and prints out the character and its ASCII equivalent
#include <iostream>

int main(void)
{
    // Get value from user
    std::cout << "Enter a single character: ";
    char a{};
    std::cin >> a;

    // Print out the character and its ascii version
    std::cout << "You entered \'" << a << "\', which has ASCII code " << static_cast<int>(a) << '\n';
    return 0;

}
