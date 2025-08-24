// Program that illustrates implementation-defined behaviour by showing then number of bytes allocated for an int
#include <iostream>

int main(void)
{
    std::cout << sizeof(int) << '\n';
    return 0;
}
