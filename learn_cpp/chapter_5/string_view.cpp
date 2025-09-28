// Progam to illustrate the use-case for std::string_view (introduced in C++17)
#include <iostream>
#include <string_view>

void print_str(std::string_view s) // Read only access to whatever is passed in to the parameter here
{
    std::cout << s;
}

int main(void)
{
    std::string_view s{ "Hello world!\n" }; // On initialization, we gain read only access to the C-Style string created here
    print_str(s);
    return 0;
}
