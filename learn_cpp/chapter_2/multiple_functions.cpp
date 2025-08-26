// Program that illustrates function calls within function calls
#include <iostream>

void do_b(void)
{
    std::cout << "In do_b()\n";
}

void do_a(void)
{
    std::cout << "Starting do_a()\n";
    do_b();
    std::cout << "Ending do_a()\n";
}

int main(void)
{
    std::cout << "Starting main()\n";
    do_a();
    std::cout << "Ending main()\n";
    return 0;
}
