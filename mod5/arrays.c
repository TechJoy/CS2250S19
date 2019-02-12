/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  First look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:05:02 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define GRADESMAX 3

// Function Prototypes

// Main Function
int main()
{
    int grades[GRADESMAX]; //Array of side ARRAYMAX

    for(int i = 0; i < GRADESMAX; i++){
    
        printf("Enter a number: ");
        scanf("%d", &grades[i]); //do not use &
    }

    for (int i = GRADESMAX; i > 0; i--)
    printf("The first number [%d]\n", grades[i-1]);

    return 0;
}
// Function Definitions


