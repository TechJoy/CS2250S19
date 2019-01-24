/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate the cartesian coordinates based on the
 *                  radius and theta angle(degrees)
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:35:46 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out -lm
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

    const double PI = 3.14159265359;

// Main Function
int main()
{
    double radius = 0.0;
    double angle = 0.0;
  //  double angleRadians = 0.0;
    
    //1) Capture user input for radis adn theata(dgrees)
    printf("Enter radius in meters");
    scanf("%lf", &radius);
    printf("Enter angle in degrees");
    scanf("%lf", &angle);
    //2) Convert theta angle to radians
    angle = angle * (PI / 180.0);
    //3) Calculate your cartesian coordinates
    //4) Print the :result



    return 0;
}
// Function Definitions


