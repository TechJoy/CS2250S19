/*
 * =====================================================================================
 *
 *       Filename:  pgm3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/16/2019 10:32:10 PM
 *       Revision:  none
 *       Compiler:  gcc
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

    int      userInt;
    double   userDouble;
    char     userChar;
    char     userString[20];

    printf("Enter integer: ");
    scanf("%d", &userInt);

    printf("Enter double: ");
    scanf("%lf", &userDouble);

    printf("Enter caracter: ");
    scanf(" %c", &userChar);

    printf("Enter String: ");
    scanf("%s", userString);

    printf("%d %lf %c %s\n", userInt, userDouble, userChar, userString);
    return 0;
}
// Function Definitions


