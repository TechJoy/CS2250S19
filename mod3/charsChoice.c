/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  Use conditionals
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:12:10 AM
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
    char letterGrade;
    printf("Enter the grade you want for this class: ");
    printf("Your chosices are: 'A'\t'B'\t'C'\n");
    printf("\t\t\t'D'\t'F'\n:");
    scanf(" %c", &letterGrade);
    printf("To get an [%c], you need the following grade:\n", letterGrade);
    if(letterGrade == 'A')
    {
        printf("You need to get >= 94 points\n");
    }


   return 0;
}
// Function Definitions


