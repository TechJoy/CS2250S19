/*
 * =====================================================================================
 *
 *       Filename:  forloops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:39:37 AM
 *       Revision:  none
 *       Compiler:  gcc forloops.c -out forloops.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAX_NUMBER 5



// Function Prototypes

// Main Function
int main()
{
    
    int num = 0;
    for (int i = 0; i < MAX_NUMBER; ++i) {
        printf("your i[%d] num++ [%d]\n", i, num++);    
        printf("your i[%d] num[%d]\n", i, num);    
        printf("your i[%d] ++num [%d]\n", i, ++num);    
    }

    printf("hello\n");
    return 0;
}
// Function Definitions


