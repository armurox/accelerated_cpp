// Contains the actual computation logic functions
#include "compute.h"
#include <iostream>

void print_result(double x, double y, char op)
{
    double result;
    if (op == '*')
        result =  x * y;
    if (op == '+')
        result =  x + y;
    if (op == '-')
        result = x - y;
    if (op == '/')
        result = x / y;
    else
        return;
    std::cout << x << ' ' << op << ' ' << y << " is " << result << '\n';
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