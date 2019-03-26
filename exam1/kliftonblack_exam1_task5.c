/*
 * =====================================================================================
 *
 *       Filename:  kliftonblack_exam1_task5.c
 *
 *    Description:  Determin if it is a leap year
 *
 *        Version:  1.0
 *        Created:  02/21/2019 09:13:14 AM
 *       Revision:  none
 *       Compiler:  gcc kliftonblack_exam1_task5.c -o kliftonblack_exam1_task5.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define START_YEAR 2000
#define END_YEAR 2020
// Function Prototypes

int IsLeap(int year);

// Main Function
int main(int argc, char* argv[])
{
    int isLeap = 0;

    // loop to test function IsLeap
    for(int i = START_YEAR; i < END_YEAR; i++){
        isLeap = IsLeap(i);
        if(isLeap == 1)
            printf("%d is a leap year\n", i);
    }
    return 0;
}
// Function Definitions


// Function: IsLeap
// Description: Determine if its a leap year
// Param: int year - year in questino
// Output 1 if true 0 if false
int IsLeap(int year){

    if(year % 4 == 0) {
        if(year % 100 == 0){
            if(year % 400 == 0){
                return 1;  //If divisable by 400 a leap year
            }  //year % 400
            return 0;  //divisable by 100 but not 400 not a leap year
        } //year % 100
        return 1;  //If divisable by 4 but not 400 its a leap year
    } //year % 4
    return 0;
}

