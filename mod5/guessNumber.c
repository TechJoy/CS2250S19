/*
 * =====================================================================================
 *
 *       Filename:  guessNumber.c
 *
 *    Description:  Guess a number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:45 AM
 *       Revision:  none
 *       Compiler:  gcc guessNumber.c -o guessNumber.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
#define MAX 3
#define LIMIT 100

// Function Prototypes

// Main Function
int main()
{
    int number, guess;
    srand(time(0));                 //set the random SEED
    guess = rand() % LIMIT + 1;

    for(int i = 0; i < MAX; ++i){
        printf("Guess a nubmer between 0 and %d\n", LIMIT);
        scanf("%d", &number);
        if (number == guess){
            printf("Congrats you got it right\n");
            return 0;
        } else if (guess < number){
            printf("Guess lower\n");
        } else {
            printf("Guess higer\n");
        }
        
    }

    printf("Sorry you did not guess the number [%d].\n", guess);
    return 0;
}
// Function Definitions


