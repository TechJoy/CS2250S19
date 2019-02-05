/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:00 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 4

// Function Prototypes

// Main Function
int main()
{

    double total = 0.0;
   // double avg  = 0.0;
    double value = 0.0;
    int  count = 0;
    //Task 1: calculate teh average of user input values
    
    while(count < MAXCOUNT){
        ++count;
        printf("Enter grade (%d) (0-100): ", count);
        scanf("%lf", &value);
        total = total + value;
    }

    printf("/n/nThe average grade is %.2lf\n", total/MAXCOUNT);
    return 0;
}
// Function Definitions


