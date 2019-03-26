/*
 * =====================================================================================
 *
 *       Filename:  simpleCalculator.c
 *          Usage:  ./simpleCalculator.out <PARAM1> <PARAM2>
 *    Description:  Calculate the sum, diffrence, product of two input parameters
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:28:28 AM
 *       Revision:  none
 *       Compiler:  gcc simpleCalculator.c -o simpleCalculator.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
#define ADD 1
#define SUB 2
#define MUL 3
#define QUIT 0
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice = 0;
    int num1 = 0;
    int num2 = 0;
    if(argc != 3){
        printf("Invalid number of paraminters\n");
        printf("Usage %s <PARM1> <PARM2>\n", argv[0]);
        return 1;
    }
    do{
    printf("What do you want to do with these numbers?\n");
    printf("\t1) Addition\n");
    printf("\t2) Subtraction\n");
    printf("\t3) Multiplication\n");
    printf("\t0) to quit\n");
    scanf("%d", &choice);
    
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    
    switch ( choice ) {
        case ADD:
            printf("%s + %s = %d\n"
                    , argv[1], argv[2], num1 + num2);
            break;
        case SUB:
            printf("%s - %s = %d\n"
                    , argv[1], argv[2], num1 - num2);
            break;
        case MUL:
            printf("%s * %s = %d\n"
                    , argv[1], argv[2], num1 * num2);
            break;
        default:
            printf("Unsupported function \n");
            break;
     }/* -----  end switch  ----- */
    }
    while(choice != QUIT);

return 0;
}
// Function Definitions


