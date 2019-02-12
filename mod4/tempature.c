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
#define CELCIUS 0
#define FAHRENHEIT 1
#define BOILING_POINT_CEL 100
#define BOILING_POINT_FAHR 212
#define FREEZE_POINT_CEL 0
#define FREEZE_POINT_FAHR 32
#define BOIL 1
#define LIQUID 2
#define ICE 3

// Main Function
int main()
{
 //   float temp = 7.9;   //Celsius
    double in_temp = 0.0;
    double out_temp = 0.0;
    int choice;
    int waterState = 0;
    // for float use the %f placeholder

    
    printf("Welcome to temperature calculator\n");
    printf("\t0) for Celsisu\n\t1) for Fahrenheit\n\n");
    printf("Please enter your choice: ");

    scanf("%d", &choice);

    if (choice == CELCIUS)
    {
        printf("Enter the tempature in Celsius: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp * 9.0/5.0) + 32; 
        printf("%lf is the temp in Faherinheit\nBye!\n", out_temp);
    
    } 
    else if (choice == FAHRENHEIT)
    {
        printf("Enter the tempature in Faherinheit: ");
        scanf("%lf", &in_temp);
        out_temp = (in_temp - 32) * 5.0/9.0;
 
        printf("%lf is the temp in Celcius\nBye!\n", out_temp);
    
    } else 
    {
    printf("You did not enter a 1 or 0\nBye\n");
    return 0;
    }

    if (choice == FAHRENHEIT)
    {
        if (out_temp >= BOILING_POINT_CEL)
    
    {
        waterState = BOIL;
    }
        else if(in_temp > FREEZE_POINT_CEL && in_temp < BOILING_POINT_CEL)
        {
            waterState = LIQUID;
        }
        else
        {
            waterState = ICE;
        }

    }
    else
    {
        if(out_temp >= BOILING_POINT_FAHR)
        {
            waterState = BOIL;
        } 
        else if(out_temp > FREEZE_POINT_FAHR && out_temp < BOILING_POINT_FAHR)
        {
            waterState = LIQUID;
        }
        else
        {
            waterState = ICE;
        }     
    }

    switch(waterState){
    
    case BOIL:

            printf("Your water is boiling\n");
        break;
    case ICE:

            printf("Your water is freezing\n");
        break;

    case LIQUID:

            printf("Your water is liquid\n");
        break;
    default:
        break;
    
    
    }

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


