/*
 * ===================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 08:52:50 AM
 *       Revision:  none
 *       Compiler:  gcc struct_test.c -o struct_test.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

typedef struct Test
{
   int idNum;
   double* ptPay;

} Test;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Test emp;
    double pay = 123.231;

    emp.idNum = 12345;
    //emp.ptPay = (double*)malloc(sizeof(double));
    emp.ptPay = &pay;



    printf("Emplyee number %d was paid $%.2lf.\n", emp.idNum, *emp.ptPay);
    return 0;
}
// Function Definitions


