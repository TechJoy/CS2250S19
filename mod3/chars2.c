/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  More character fixtures
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:04:52 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars.out
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

    char c = 'O';
    printf ("C is %c\n",c);
    printf ("C is %d\n",c);
    printf ("C is %#x\n",c);

    printf("Enter the first letter of your first name: \n");

    scanf("%c", &c);
    printf ("Your initial is [%c]\n", c);
    
    printf("Enter the first letter of your last name: \n");

    scanf(" %c", &c);
    printf ("Your initial is [%c]\n", c);
    
    return 0;
}
// Function Definitions


