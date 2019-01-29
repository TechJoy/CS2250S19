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
 //   float temp = 7.9;   //Celsius
    double in_temp = 0.0;
    double out_temp = 0.0;
    int choice;
    // for float use the %f placeholder

    
    printf("Welcome to temperature calculator\n");
    printf("\t 0 for Celsisu\n\t 1 for Fahrenheit\n");
    printf("Please enter your choice: ");

    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Enter the tempature in Celsius: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp * 9.0/5.0) + 32;
    } 
    else if (choice == 1)
    {
        printf("Enter the tempature in Faherinheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
    } else 
    {
    printf("You did not enter a 1 or 0\nBye\n");
    return 0;
    }

    printf("%lf is the temp\nBye!\n", out_temp);
        /*
    printf("The tempature is %f Celcius\n", temp);
    printf("What is the tempature in Ogden now in Celcius: ");

    scanf("%f", &temp);

    f_temp = (temp * 9/5) + 32;

    printf("I see your temp is %lf in faranheit.\n", f_temp);
*/
    return 0;
}
// Function Definitions


