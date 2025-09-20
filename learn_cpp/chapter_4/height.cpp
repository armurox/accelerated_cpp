// Program that computes the height of a ball above the ground every second until it reaches the ground
#include "io.h"
#include "compute.h"


int main(void)
{
    double height{ get_height() };
    print_height_every_second(height);
    return 0;
}