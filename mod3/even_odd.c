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
    int value1 = 0;
    int value2 = 0;

    printf("Enter both an even number and odd number seperated by a spacee: ");
    scanf("%d %d", &value1, &value2);

    if(value1 % 2 != value2 % 2){
        printf("Good job you can follow basic instructions\n");
    } else {
        printf("Learn to read and Obey!\n");
    }

//    if(value % 2){
 //       printf("The value [%d] is odd\n", value);
 //   } else {
  //      printf("The value [%d] is even\n", value);
 //   }

    return 0;
}
// Function Definitions


