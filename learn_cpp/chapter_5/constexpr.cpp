// Program to illustrate the usage of constexpr in C++
#include <iostream>

// Functions normally execute at run time and are therefore not legal initialization values for constexpr variables
int five(void)
{
    return 5;
}

int main(void)
{
    constexpr double gravity{ 9.8 };
    constexpr int sum{ 4 + 5 };
    constexpr int something{ sum };

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
    constexpr int my_age{ age };  // incorrect
    constexpr int f{ five()};  // incorrect
    return 0;
}
