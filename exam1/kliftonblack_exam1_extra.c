/*
 * =====================================================================================
 *
 *       Filename:  kliftonblack_exam1_extracredit.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:44:20 AM
 *       Revision:  none
 *       Compiler:  gcc kliftonblack_exam1_extracredit.c -o kliftonblack_exam1_extracredit.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

void jamon(int num);

// Main Function
int main(int argc, char* argv[])
{
    int p;
    printf("Please enter an integer\n");
    scanf("%d", &p);
    jamon(p);
    return 0;
}
// Function Definitions

void jamon(int num){

    for(int count = 0; count < num; count++){
        printf("O Jamon mio!\n");
    }

}
