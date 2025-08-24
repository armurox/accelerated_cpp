// A program that demonstrates the different kinds of initialization
#include <iostream>

int main(void)
{
    [[maybe_unused]] int a; // default-initialization (maybe useful for some optimizations, but otherwise not preferred)

    // Older forms of initialization
    [[maybe_unused]] int b = 0; // Copy initialization - looks readable, but disadvantage is that narrowing conversion is not ignored
    [[maybe_unused]] int c ( 0 ); // direct-initialization - not preferred due to confusion with function syntax

    // Modern initialization forms
    [[maybe_unused]] int t { 0 }; // direct-list-initialization - preferred as compiler complains about narrowing conversion
    [[maybe_unused]] int u {}; // value-initialization - preferred as default is set to be the class constructor's default

    std::cout << a; // Without this being specified its value is unknown.
    /* Maybe unused is a useful flag as the compiler will not complain about the variable being unsued.
    Useful if you have a drop in for many constant like pi, phir, gravity etc, and only some of them are used in your program.
    Generally, is a good thing to avoid though.*/

}
