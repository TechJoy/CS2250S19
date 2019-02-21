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

// Function Prototypes

int IsLeap(int year);

// Main Function
int main(int argc, char* argv[])
{
    int isLeap = 0;
    for(int i = 2000; i < 2017; i++){
        isLeap = IsLeap(i);
        if(isLeap == 0)
            printf("%d is not a Leap Year", i);
        else 
            printf("%d is a leap year", i);
    
    }
    return 0;
}
// Function Definitions

int IsLeap(int year){


    if(year % 4 == 0) {
        if(year % 100 == 0){
            if(year % 400 == 0){
                return 0;
            }  //year % 400
            return 1;
        } //year % 100
        return 1;
    } //year % 4
    return 0;

}

