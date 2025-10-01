// Program that gets the name and age of two people, then prints which one is older
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Enter the name of person #1: ";
    std::string name_1;
    std::cin >> name_1;
    std::cout << "Enter the age of " << name_1 << ": ";
    int age_1;
    std::cin >> age_1;
    std::cout << "Enter the name of person #2: ";
    std::string name_2;
    std::cin >> name_2;
    std::cout << "Enter the age of " << name_2 << ": ";
    int age_2;
    std::cin >> age_2;
    std::cout << ((age_1 > age_2) ? name_1 : name_2) << " is older than " << ((age_1 > age_2) ? name_2 : name_1) << '\n';
    return 0;
}
