#include <stdio.h>
#include "dry.h"

int main()
{
    float dhrystone_per_second;
    dhrystone_per_second = dhrystone_integer_test();
    printf("\nhs Dhrystone Per Second =%10.0f\n", dhrystone_per_second);
    return 0;
}