/*
 * =====================================================================================
 *
 *       Filename:  temperatures.c
 *
 *    Description:  Tempature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:01 AM
 *       Revision:  none
 *       Compiler:  gcc temperatures.c -o temperatures.out
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
#define NUM 40
#define MAX 45
#define MIN 20
// Main Function
int main()
{
    double max_ogden[NUM];
    double min_ogden[NUM];
    double average_sum = 0.0;
    double max = 0.0;
    double min = 0.0;
    srand(time(0));
    printf("Enter the max and min Ogden temp for the next %d days\n", NUM);

    for (int i = 0; i < NUM; i++){
       // scanf("%lf %lf", &max_ogden[i], &min_ogden[i]);
        min_ogden[i] = MIN + (rand() % (MAX-MIN));
        max_ogden[i] = min_ogden[i] + (rand() % (MAX-MIN));
        min = min_ogden[i];
        max = max_ogden[i];
    }
    
    for (int i = 0; i < NUM; i++){
        printf("Day %d Ogden tempature is max [%6.2lf] min [%6.2lf]\n", i+1,  max_ogden[i], min_ogden[i]);
    }

   
    
    for (int i = 0; i < NUM; i++){
        average_sum = average_sum + min_ogden[i] + max_ogden[i];
        if(min_ogden[i] < min)
            min = min_ogden[i];
        if(max_ogden[i] > max)
            max = max_ogden[i];
    }

    printf("The average temp is [%6.2lf] with a max of [%6.2lf] and a min of [%6.2lf]\n"
            , average_sum/(NUM*2), max, min);
    return 0;
}
// Function Definitions


