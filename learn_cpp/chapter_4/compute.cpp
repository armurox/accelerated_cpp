// Contains the actual computation logic functions
#include "compute.h"
#include <iostream>

double compute(double x, double y, char op)
{
    if (op == '*')
        return x * y;
    if (op == '+')
        return x + y;
    if (op == '-')
        return x - y;
    if (op == '/')
        return x / y;
    return 0;
}

void print_height_every_second(double height)
{
    int seconds = 0;
    double original_height{ height };
    while (height > 0)
    {
        std::cout << "At " << seconds++ << " seconds, the ball is at height: " << height << " meters\n";
        height = original_height - (9.8 * (seconds * seconds)) / 2;
    }
}