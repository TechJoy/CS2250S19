/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  Learn some string functions.
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:08:26 AM
 *       Revision:  none
 *       Compiler:  gcc stringsFunc - o stringsFunc.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>  //for string manipulation operations

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last [50];
    char fullName [100];

    printf("Please enter first name: ");
    scanf("%s", first);
    printf("Please enter last name: ");
    scanf("%s", last);

    strcpy(fullName, first);
    strcat(fullName, " ");
    strcat(fullName, last);

    printf("Full name is %s\n", fullName);
    return 0;
}
// Function Definitions


