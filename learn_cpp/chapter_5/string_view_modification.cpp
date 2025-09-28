// Program that demonstrates view modification functions
#include <iostream>
#include <string_view>

int main(void)
{
    std::string_view s{ "Hello World\n" };
    s.remove_prefix(1);
    std::cout << s;
    s.remove_suffix(2);
    std::cout << s;


}
