// A program to illustrate some basic function behaviour, simply prints out something
#include <iostream>

void do_print(void)
{
    std::cout << "In do_print()\n";
}

int main(void)
{
    std::cout << "Starting main()\n";
    do_print();
    do_print();
    std::cout << "Ending main\n";
    return 0;
}