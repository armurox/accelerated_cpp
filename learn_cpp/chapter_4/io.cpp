// Contains the input output function definitions
#include "io.h"
#include <iostream>

double get_double(void)
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char get_operator(void)
{
    std::cout << "Enter x, -, *, or /: ";
    char op{};
    std::cin >> op;
    return op;
}

double get_height(void)
{
    std::cout << "Enter the height of the tower in meters: ";
    double h{};
    std::cin >> h;
    return h;
}