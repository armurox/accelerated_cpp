#include <iostream>

void a(void)
{
    std::cout << "a() called\n";
    return;
}

void b(void)
{
    std::cout << "b() called\n";
    a();
    return;
}

int main(void)
{
    a();
    b();

    return 0;
}
