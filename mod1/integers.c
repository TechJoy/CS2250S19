#include<stdio.h>

// This is a comment. Your complier will ignore
//
// to complie my code run the command gcc.intigers.c - intigers 
// to run your code: ./integers
int main()
{

 	int age = 21;
	int weight = 0;


	// printf() to print ouput to screen	
	printf("How old are you?\n");

	// use place holders to display variable information
	// for example: %d for integers
	// 		$p for address of variable
	printf ("I am %d years old\n", age);
	
	printf ("The addres of int age is = %p\n", &age);
	age = 23;
	
	printf ("I am %d years old\n", age);
	printf ("You are %d years and %d pouunds\n", age, weight);

	return 0;
}
