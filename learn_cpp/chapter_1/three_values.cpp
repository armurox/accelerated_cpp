// Ask a user to enter 3 values and print these to the screen
#include <iostream>

int main(void)
{
    int x{}, y{}, z{};
    std::cout << "Enter three numbers: ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0; 
}
