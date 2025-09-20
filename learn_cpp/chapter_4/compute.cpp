// Contains the actual computation logic functions
#include "compute.h"

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
