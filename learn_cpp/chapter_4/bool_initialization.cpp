// Program that illustrates the different ways in which bools can be initialized
#include <iostream>

int main(void)
{
    bool b_int{ 0 };
    bool c_int{ 1 };
    // bool d_int{ 2 } -> Note that this will fail with a compiler error due to the fact that narrowing conversions are not allowed
    // with listing initializations

    std::cout << std::boolalpha;
    std::cout << b_int << ' ' << c_int << '\n';

    // Copy initialization does allow narrowing conversions however
    bool d_int = 2;
    std::cout << d_int << '\n';
}
