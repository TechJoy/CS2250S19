/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  learn while loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:00 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>

// Constants
#define MAXCOUNT 5

#define MINCOUNT 2
#define MAXSTUDENTS 25
#define MINSTUDENTS 1
#define MAXGRADE 100
#define MINGRADE 0
#define AGRADE 90
#define BGRADE 80
#define CGRADE 70
#define DGRADE 60

// Function Prototypes

// Main Function
int main()
{

    double total = 0.0;
    double avg  = 0.0;
    double value = 0.0;
    int  grade_count = 0;
    int totalgrades = 0;
    int students = 0;
    double classAvg = 0.0;
    int studentCount = 0;
    //Task 1: calculate teh average of user input values

    //Enter the nubmer of grades
    printf("Enter the total number of grades(%d-%d): "
            , MINCOUNT, MAXCOUNT);
    scanf("%d", &totalgrades);

    if(totalgrades < MINCOUNT){
        totalgrades = MINCOUNT;
        printf("Setting the number of grades to %d\n", totalgrades);
    } 
    if(totalgrades > MAXCOUNT){
        totalgrades = MAXCOUNT;
        printf("Setting the number of grades to %d\n", totalgrades);
    }

    // Get number of students
    printf("Enter the total students in the class(%d-%d): ",MINSTUDENTS, MAXSTUDENTS);
    scanf("%d", &students);
    if(students < MINSTUDENTS){
        students = MINSTUDENTS;
        printf("Setting the number of students to %d\n", students);
    } 
    if(students > MAXSTUDENTS){
        students = MAXSTUDENTS;
        printf("Setting the number of students to %d\n", students);
    }

    while (studentCount < students){
        studentCount++;
        printf("Enter grades for student (%d)\n",studentCount);
        grade_count = 0;
        total = 0.0;
        while(grade_count < totalgrades){
            ++grade_count;
            printf("Enter grade (%d) for student (%d) (%d-%d): "
                    , grade_count, studentCount,  MINGRADE, MAXGRADE);
            scanf("%lf", &value);
            if((value < MINGRADE ) || (value > MAXGRADE)){
                printf("\nInvalid entry.  Number must be between 0.0 and 100.0\n");
                grade_count--;
                continue;
            }
            total = total + value;
        }
        avg = total/totalgrades;
        printf("\nThe average grade for student (%d) is %.2lf\n"
                ,studentCount, avg);
        classAvg += avg;
        if (avg > AGRADE)
        {
            printf("Student (%d) recieved an A\n", studentCount);
        } else if (avg > BGRADE)
        {
            printf("Student (%d) recieved an B\n", studentCount);
        } else if (avg > CGRADE)
        {
            printf("Student (%d) recieved an C\n", studentCount);
        } else if (avg > DGRADE)
        {
            printf("Student (%d) recieved an D\n", studentCount);
        } else
        {
            printf("Student (%d) recieved an F\n", studentCount);
        } 




    }

    printf("The class Average is %.2lf\n", classAvg/students);
    return 0;
}
// Function Definitions


