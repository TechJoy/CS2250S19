/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2019 09:25:56 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

int Get_Sum (int x, int y);
double Get_BMI(double weight, double height);
// Main Function
int main(int argc, char* argv[])
{
   // int num1, num2;

  // num1 = 10;
  // num2 = 234;

   printf("Sum %lf\n", Get_BMI(200.0, 2.0));

    return 0;
}
// Function Definitions

int Get_Sum(int x, int y){

    return x + y;
}
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_BMI
 *  Description:  
 * =====================================================================================
 */
double Get_BMI(double weight,double height){


    return weight/(height * height);


}
