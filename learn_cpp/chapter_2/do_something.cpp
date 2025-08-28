#include <iostream>

void do_something(void)
{
#ifdef PRINT
    std::cout << "Printing something!\n";
#endif

#ifndef PRINT
    std::cout << "Not printing!\n";
#endif
}