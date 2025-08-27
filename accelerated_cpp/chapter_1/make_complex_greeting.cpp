// A program that prints out a formatted greeting to a user
#include <iostream>
#include <string>

std::string get_name(void);
std::string get_wrapping_symbol(void);
void print_formatted_greeting(std::string greeting, std::string wrapping_symbol);

int main(void)
{
    const std::string name{get_name()};
    const std::string greeting{"Hello, " + name + "!"}; 
    print_formatted_greeting(greeting, get_wrapping_symbol());

    return 0;
}



std::string get_name(void)
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    return name;
}

std::string get_wrapping_symbol(void)
{
    std::cout << "Please enter the symbol you'd like to format your text with: ";
    std::string wrapping_symbol;
    std::cin >> wrapping_symbol;
    wrapping_symbol = wrapping_symbol.at(0);
    return wrapping_symbol;
}

    void print_formatted_greeting(std::string greeting, std::string wrapping_symbol)
{
    const std::string spaces(greeting.size(), ' ');
    const std::string second = wrapping_symbol + " " + spaces + " " + wrapping_symbol; 
    const std::string first(second.size(), wrapping_symbol.at(0));

    std::cout << first << '\n';
    std::cout << second << '\n';
    std::cout << wrapping_symbol + ' ' << greeting << ' ' << wrapping_symbol << '\n';
    std::cout << second << '\n';
    std::cout << first << '\n';
}