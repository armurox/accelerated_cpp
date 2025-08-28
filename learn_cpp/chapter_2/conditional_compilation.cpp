// Program that demonstrates conditional compilation
#include <iostream>

#define PRINT_JOE

int main(void)
{
#ifdef PRINT_JOE
    std::cout << "Joe\n";
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n";
#endif

#ifndef PRINT_BOB
    std::cout << "Not Bob\n";
#endif
}
