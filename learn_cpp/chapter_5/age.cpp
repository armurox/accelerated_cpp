// Program that gets the name and age of two people, then prints which one is older
#include <iostream>
#include <string>

std::string get_name(int num)
{   
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int get_age(std::string name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age;
    std::cin >> age;
    return age;
}

int main(void)
{

    const std::string name_1{ get_name(1) };
    const int age_1{ get_age(name_1) };
    const std::string name_2{ get_name( 2 )};
    const int age_2{ get_age(name_2) };
    std::cout << ((age_1 > age_2) ? name_1 : name_2) << " is older than " << ((age_1 > age_2) ? name_2 : name_1) << '\n';
    return 0;
}
