#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int get_user_input(void)
{
    PLOGD << "get_user_input() called";
    std::cout << "Enter a number: ";
    int n{};
    std::cin >> n;
    return n;
}

int main(void)
{
    plog::init(plog::debug, "log_file.txt");
    PLOGD << "main() called";

    int n{get_user_input()};
    std::cout << "You entered " << n << '\n';
    return 0;
}
