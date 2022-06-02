#include <stdio.h>
#include "superpi.h"

int main()
{
    double time = 0;
    time = superpi_float_point_test();
    printf("\nhs SuperPi_float_point_test elapse_time = %f s\n", time);
    return 0;
}