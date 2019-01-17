/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description:  Calculate the BMI
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:33 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi
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
    int weight = 0;
    int height = 0;
    int BMI = 0;

    //BMI weight/height**2
    //1) Capture user input
    printf("Please enter height in meters (m): ");
    scanf("%d", &height);

    printf("Please enter weight in kelograms (kg): ");
    scanf("%d", &weight);

    //2) Calculate BMI

    BMI = weight / (height * height);

    //3) Dispaly BMI

    printf("The BMI for a person with the weight of %d(kg) and a height of %d(m)\n", weight, height);
    printf("is %d.\n", BMI);
    printf("Done\n");
    return 0;
}
// Function Definitions


