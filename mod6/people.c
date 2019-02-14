/*
 * =====================================================================================
 *
 *       Filename:  people.c
 *
 *    Description:  Attributes for people
 *
 *        Version:  1.0
 *        Created:  02/12/2019 10:12:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Constants
#define PERSONS 5
#define ATTRI 3
#define AGE 0
#define WEIGHT 1
#define HEIGHT 2

// Function Prototypes

// Main Function
int main()
{
    double people[PERSONS][ATTRI];
    srand(time(0));
    
    for(int i = 0; i < PERSONS; i++){
        for(int j = 0; j < ATTRI - 1; j++){
            switch(j){
            case AGE:
                people[i][j] = rand() % 50;
                break;
            case WEIGHT:
                people[i][j] = rand() % 200;
                break;
            case HEIGHT:
                people[i][j] = rand() % 150;
            default:
                printf("A crazy error has occured\n");
            }
        }
    }

            
    for (int row  = 0; row  < PERSONS; row += 1 ) {
        for (int col = 0; col < ATTRI; col++){
            switch(col){
                case AGE:
                    printf("\tYour age is %6.0lf\n", people[row][col]);
                    break;
                case WEIGHT:
                    printf("\tYour weight is %6.0lf\n", people[row][col]);
                    break;
                case HEIGHT:
                    printf("\tYour height is %6.0lf\n", people[row][col]);
                    break;
            }
        }
    }
    return 0;
}
// Function Definitions


