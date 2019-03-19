/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:03:33 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.c.out
 *
 *         Author:  Klifton Black (), kliftonblack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Const.
#define MAXNAME 30
#define MAXPHONE 15


typedef struct TeleType{
  char name[MAXNAME];
  char phoneNum[MAXPHONE];
  struct TeleType* next;

}Tele;
// Function Prototypes

void DisplayTele(Tele* content);

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Acme, John", "892-232-2323"};
    Tele t2 = {"Acme, John1", "123-132-2233"};
    Tele t3 = {"Acme, John2", "342-212-2423"};
    
    Tele* first;
    first = &t1;
    t1.next = &t2;
    t2.next = &t3;
    t3.next = NULL;

    DisplayTele(first);

    //printf("%s\n%s\n", first->name, first->phoneNum); 


    return 0;
}
// Function Definitions



void DisplayTele(Tele* content){

    while(content != NULL){
        printf("%-30s %-20s\n", content->name, content->phoneNum);
        content = content->next;
    }
}

