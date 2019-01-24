/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  Learn to use stirngs
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:49:56 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -out strings.out -lm
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

    const int SIZE = 50;
// Main Function
int main()
{

    //A string is a list/collection of characters (array)
    //Strings you use %s as a placeholder
    char fName[SIZE];
    unsigned int long age;  //For unsigne use the %du, lu, llu
    char lName[SIZE];

    printf("Please enter your first name(< %d characters No spaces): ", SIZE);
    scanf("%s", fName);

    printf("Enter your age: ");
    scanf ("%lu", &age);
    printf("Please enter your name(< %d characters No spaces): ", SIZE);
    scanf("%s", lName);
    
    printf("Hi [%s][%s] you are %lu years old\n", fName, lName, age);

    return 0;
}
// Function Definitions


