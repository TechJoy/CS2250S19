/*
 * =====================================================================================
 *
 *       Filename:  scanfChars.c
 *
 *    Description:  Take multiple Chars as input
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:40:52 AM
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
    char cIn;

    printf ("Enter a character: ");
    scanf("%c", &cIn);
    printf ("You entered [%c]\n", cIn);

    printf ("Enter a character: ");
    scanf(" %c", &cIn);
    printf ("You entered [%c]\n", cIn);

    return 0;
}
// Function Definitions


