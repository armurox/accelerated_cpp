// Program to illustrate the behaviour of bits, dec, oct and hex
#include <bitset>
#include <iostream>
#include <print>

int main(void)
{
    int x{ 12 };
    std::bitset<8> y{ 0b1100'0101 };
    std::cout << y << '\n';
    std::println("{:b} {:#b}", 0b1010, 0b1010);
    std::cout << std::hex << x << '\n';
    std::cout << std::oct << x << '\n';
    std::cout << std::dec << x <<'\n';
    return 0;
}