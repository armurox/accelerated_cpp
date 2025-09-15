// Program that sets the precision of the output
#include <iomanip>
#include <iostream>

int main(void)
{
    std::cout << std::setprecision(17);
    std::cout << 3.333333333333333333333333333333333333333f << '\n';
    std::cout << 3.333333333333333333333333333333333333333 << '\n';
}
