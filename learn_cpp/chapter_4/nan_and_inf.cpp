// Program to represent NaN and Inf data types (alng with signed zero)
#include <iostream>

int main(void)
{
    double zero{ 0.0 };
    std::cout << zero << '\n';
    double posinf{ 5.0 / zero };
    std::cout << posinf << '\n';
    double neginf{ -5.9 / zero };
    std::cout << neginf << '\n';
    double nan{ zero / zero };
    std::cout << nan << '\n';
    double pos_zero{ 0.0 / posinf };
    std::cout << pos_zero << '\n';
    double neg_zero{ -0.0 / posinf};
    std::cout << neg_zero << '\n';
    double second_neg_zero{ 0.0 / neginf};
    std::cout << second_neg_zero << '\n';
}
