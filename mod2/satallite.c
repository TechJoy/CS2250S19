/*
 * =====================================================================================
 *
 *       Filename:  satallite.c
 *
 *    Description:  Calculate of altiude of Satallite
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:47:08 AM
 *       Revision:  none
 *       Compiler:  gcc satallite.c -o satallite.out -lm
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
   const double GRAVITY = 6.67e-11;  //Newton's constant
   const double E_MASS = 5.97e24;    //Earth's Mass (kg)
   const double E_RADIUS = 6.371e3;  //Earth's Radius (meters)
   const double PI = 3.1415941;      //pi
   // Function Prototypes

// Main Function
int main()
{
    double PeriodT;
    double Height;
    //1) Enter the period
    printf("Enter the period in seconds: ");
    scanf("%lf", &PeriodT);

    //Height = [(G M T^2)/(4PI^2)]^1/3 - R

    Height = GRAVITY * E_MASS * pow(PeriodT, 2); 
    Height = Height / 4 * pow(PI, 2);
    Height = pow(Heigh, 1/3);
    Height = Height - E_RADIUS;

    printf("For the period %1.2lf the height is %1.4lf\n", PeriodT, Height);

    return 0;
}
// Function Definitions


