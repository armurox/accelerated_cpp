// Program that gets an integer from a user and print the double of it, split across multiple files
#include <iostream>

int get_number_from_user(void);

int main(void)
{
    int x{ get_number_from_user() };
    std::cout << "Double " << x << " is " << 2 * x << '\n'; 
    return 0;
}
