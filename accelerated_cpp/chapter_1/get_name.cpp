#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::cout << "Please enter your first name: ";
    std::cin >> name;  // Output buffer is flushed here
    std::cout << "Hello, " << name << "!\n";
    return 0; 
}
