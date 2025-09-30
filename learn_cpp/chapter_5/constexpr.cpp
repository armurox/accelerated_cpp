// Program to illustrate the usage of constexpr in C++
#include <iostream>

// Functions normally execute at run time and are therefore not legal initialization values for constexpr variables
// I have made this a constepr function here
constexpr int cfive(void)
{
    return 5;
}

int main(void)
{
    constexpr double gravity{ 9.8 }; // This can be optimized by the compiler now
    constexpr int sum{ 4 + 5 };
    constexpr int something{ sum };

    std::cout << "Enter your age: ";
    constexpr int f{ cfive() };
    return 0;
}
