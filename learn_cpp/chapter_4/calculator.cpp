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
    print_result(x, y, op);
    return 0;
}