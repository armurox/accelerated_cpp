// Program that checks whether a compiler is IEEE 754 compatible
#include <iostream>
#include <limits>

int main(void)
{
    std::cout << std::boolalpha;
    std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';
}
