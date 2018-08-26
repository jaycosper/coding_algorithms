/*
 * Main function for Lamda Averager
 *
 */

#include <stdint.h>
#include <stdio.h>
#include "fixedpoint.h"
#include "lamda_ave.h"

int main(void)
{
    lamda_average_t ave;
    lamda_average_t input;

    ave.all = 0;
    input.all = 0x8000;

    printf("previous average 0x%X\n", ave.all);
    ave = calcAverage(ave, input);

    printf("new average 0x%X\n", ave.all);

    return 0; // Ctest uses return 0 for pass
}