// Question 1, 2 and 3 from the quiz - Program that reads two numbers from a user, adds them together and outputs and answer
#include "io.h"
#include <iostream>

int main(void)
{
    int num1 = readNumber();
    int num2 = readNumber();
    writeAnswer(num1 + num2);
    return 0;
}
