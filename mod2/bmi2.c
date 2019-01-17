/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description:  Calculate the BMI with floating points (IEEE-754 single
 *                  and double precission
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:33 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 -lm
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    float weight = 0;
    float height = 0;
    float BMI = 0;

    //BMI weight/height**2
    //1) Capture user input
    printf("Please enter height in meters (m): ");
    scanf("%f", &height);

    printf("Please enter weight in kelograms (kg): ");
    scanf("%f", &weight);

    //2) Calculate BMI

    BMI = weight / pow(height, 2.0);

    //3) Dispaly BMI

    printf("The BMI for a person with the weight of %f(kg) and a height of %f(m)\n", weight, height);
    printf("is %f.\n", BMI);
    printf("Done\n");
    return 0;
}
// Function Definitions


