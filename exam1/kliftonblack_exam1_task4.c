/*
 * =====================================================================================
 *
 *       Filename:  kliftonblack_exam1_task4.c
 *
 *    Description:  A simple program that sorts an array
 *
 *        Version:  1.0
 *        Created:  02/21/2019 08:40:36 AM
 *       Revision:  none
 *       Compiler:  gcc kliftonblack_exam1_task4.c -o kliftonblack_exam1_task4.out
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
#define ARRAY_LENGTH 5
// Function Prototypes
void InitArray(int myNums[]);
void SortArray(int myNums[]);
void OutputArray(int myNums[]);
// Main Function
int main(int argc, char* argv[])
{
    int myNumbers[ARRAY_LENGTH];
   
    srand(time(0));  //seed random function

    InitArray(myNumbers);  //set random values

    //Output array in its initial form
    printf("The array before sorted: ");
    OutputArray(myNumbers);
    printf("\n");

   
    SortArray(myNumbers);  //Sort  Array
   
    //Output array after it is sorted
    printf("The array after sofrted: ");
    OutputArray(myNumbers);
    printf("\n");

    return 0;
}
// Function Definitions

//Function: InitArray
//Description: Randomly gernerate Array vales
//Param1: int MyNums[]

void InitArray(int myNums[]){

    for(int i = 0; i < ARRAY_LENGTH ; i++){
        myNums[i] = rand() % 1000;
    }
}

// Function: SortArray
// Discription: Sort array utilzing a bubble sort
// Param1: int myNums[]
// Constraint: array must have at least two elements to work

void SortArray(int myNums[]){
    int temp = 0;
    int sorted = 1;  //Used to tell when sort is compleate set to 1 to enter loop   
   while(sorted == 1){
       sorted = 0;  //set to 0 initially.  If still 0 after for loop
                    //array is sorted
        
       for(int i = 1; i < ARRAY_LENGTH; i++){  //start int at 1 to prevent 
                                               //going out of bounds of array
        
           if(myNums[i] < myNums[i - 1]){      //Compare to the previous number
                temp = myNums[i - 1];          //Swap numbers
                myNums[i - 1] = myNums[i];
                myNums[i] = temp;
                sorted = 1;                   //Set to 1 so loop will run again
            }
        }
   }
}

// Function: OutputArray
// Description: Output array valuse seperated by space
// Param1: myNums[]

void OutputArray(int myNums[]){

    for(int i = 0; i < ARRAY_LENGTH; i++){
        printf("%d ", myNums[i]);
    }
}


