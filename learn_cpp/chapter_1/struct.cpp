#include <iostream>

struct Employee
{
    int id;
    int age;
    double wage;
};

int main()
{
    struct Employee frank = {1, 32, 63.9};
    std::cout << frank.id;
    return 0;
}