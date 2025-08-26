// Program that illustrates the illegality of nested function in C++ (as opposed to Scheme, which allows this)
#include <iostream>

int main(void)
{
    void foo(void)
    {
        std::cout << "foo!\n";
    }

    foo();
    return 0;
}

/*
Error given by the compiler was:
illegal_nested_functions.cpp:7:5: error: function definition is not allowed here
    7 |     {
      |     ^
illegal_nested_functions.cpp:11:5: error: use of undeclared identifier 'foo'
   11 |     foo();
      |     ^
*/