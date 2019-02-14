/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Display multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 09:49:15 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define TABLE 16
// Function Prototypes

// Main Function
int main(){

    int tables[TABLE][TABLE];


    for(int y = 1; y < (TABLE + 1); y++){
     for(int x = 1; x < TABLE + 1; x++){
        printf("%4d", x*y);

     }
     printf("\n");
    }


    return 0;
}
// Function Definitions


