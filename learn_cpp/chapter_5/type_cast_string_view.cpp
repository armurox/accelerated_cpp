// Program to illustrate how you can type cast std::string_view to std::string
#include <iostream>
#include <string>
#include <string_view>

void print_str(std::string s)
{
    std::cout << s;
}

int main(void)
{
    std::string_view sv{ "Hello World\n" }; // Read only access to the C-Style string literal provided
    // print_str(sv); // Will give a compiler error, as the parameter type is s
    // std::string s = sv; // Will also give a compiler error, this is not default-list-initialization
    std::string s{ sv }; // Explicit initialization is allowed
    print_str(s);
    print_str(static_cast<std::string>(sv));
}
