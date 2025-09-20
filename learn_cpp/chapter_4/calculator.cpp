// A basic calculator
#include "io.h"
#include "compute.h"
#include <iostream>

int main(void)
{
    // Take in inputs
    double x{ get_double() };
    double y{ get_double() };
    char op{ get_operator() };

    // Print out the computed output
    std::cout << x << ' ' << op << ' ' << y << " is " << compute(x, y, op) << '\n';
    return 0;
}