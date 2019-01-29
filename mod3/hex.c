/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:04:08 AM
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
    unsigned char hex = 0xF2;
    printf("Enter a single Hex Digit: ");
    scanf("%hhx", &hex);

    if(hex % 2 == 1){
        printf("Pin 4 is on");
    }
     if(hex & 2){
        printf("Pin 3 is on");
    }
     if(hex & 4){
        printf("Pin 2 is on");
    }
     if(hex & 8){
        printf("Pin 1 is on");
    }
    


    printf("hex [%X] is equal to [%d]\n", hex, hex);
    return 0;
}
// Function Definitions


