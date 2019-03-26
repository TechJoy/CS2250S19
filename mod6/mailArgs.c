/*
 * =====================================================================================
 *
 *       Filename:  mailArgs.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:18:26 AM
 *       Revision:  none
 *       Compiler:  gcc mailArgs.c -o mailArgs.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>



// Main Function
int main(int argc, char* argv[])
{

    printf("Argument count is: %d\n", argc);
    
    for (int i = 0; i < argc; i += 1 ) {
        printf("Args %d [%s]\n", argc, argv[i]);
    }
    return 0;
}
// Function Definitions


