// Program to check if a number is prime
#include <iostream>
#include <cmath>

bool is_prime(int x);

int main(void)
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    std::cout << (is_prime(x) ? "Yor number is prime!\n" : "Your number is not prime!\n");
    return 0;
}


bool is_prime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}