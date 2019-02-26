/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/26/2019 09:19:50 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes
void UpdatePostion(double* x, double* y, double new_x, double new_y);
void DisplayPostion(double x, double y);
void ResetPostion(double*x, double *y);
// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    ResetPostion(&x, &y);

    UpdatePostion(&x, &y, atof(argv[1]), atof(argv[2]));


    DisplayPostion(x, y);

    return 0;
}
// Function Definitions

void DisplayPostion(double x, double y){

    printf("Your current positon is (%6.2lf, %6.2lf)\n",x,y);
}

void ResetPostion(double* x, double* y){
    *x = 0.0;
    *y = 0.0;

    return;
}

void UpdatePostion(double* x, double* y, double new_x, double new_y)
{
    
    *x = new_x;
    *y = new_y;

    return;
}

