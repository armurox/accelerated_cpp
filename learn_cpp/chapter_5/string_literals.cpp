// Program that illustrates how to declare std::string literals
#include <iostream>
#include <string>

int main(void)
{
    using namespace std::string_literals;
    std::cout << "Hello\n"s; // s is equivalewnt to std::string_literals::s
}