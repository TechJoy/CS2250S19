/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with float points
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:46 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    float temp = 7.9;   //Celsius
    double f_temp = 0.0;
    // for float use the %f placeholder

    printf("The tempature is %f Celcius\n", temp);
    printf("What is the tempature in Ogden now in Celcius: ");

    scanf("%f", &temp);

    f_temp = (temp * 9/5) + 32;

    printf("I see your temp is %lf in faranheit.\n", f_temp);

    return 0;
}
// Function Definitions


