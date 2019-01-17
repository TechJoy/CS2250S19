/*
 * =====================================================================================
 *
 *       Filename:  ballDropped.c
 *
 *    Description:  Get the distance travelled by a ball when it is dropped
 *                  assumption initial volicity is 0
 *
 *        Version:  1.0
 *        Created:  01/17/2019 09:07:14 AM
 *       Revision:  none
 *       Compiler:  gcc ballDropped.c -o ballDropped -lm
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants
   const double GRAVITY = 9.8;
   const int BLDG_HEIGHT = 500;
// Function Prototypes

// Main Function
int main()
{
    //formaula s = 0.5 g t^2

    double time;
    double distanceTraveld;

    printf("Enter the time in seconds: ");
    scanf("%lf", &time);

    distanceTraveld = 0.5 * GRAVITY * pow(time, 2);

    printf("After %1.2lf seconds, Distance traveled %1.2lf\n", 
            time ,distanceTraveld);

    printf("The balls distance from the ground %1.2lf\n", 
            (double)BLDG_HEIGHT - distanceTraveld);
    return 0;
}
// Function Definitions


