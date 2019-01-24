/*
 * =====================================================================================
 *
 *       Filename:  even_odd.c
 *
 *    Description:  Determin if the input value is even or odd
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:36:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    int value;

    printf("Enter if a interger value: ");
    scanf("%d", &value);

    if(value % 2){
        printf("Value is odd");
    } else {
        printf("Value is even");
    }

    return 0;
}
// Function Definitions


