#include <stdio.h>


int main()
{
	int i = 5;
	int x = 6;


	printf("Please enter two integer value seperated by a space\n");

	scanf("%d %d", &i, &x);
	printf("The sum of %d and %d is %d\n", i, x, i+x);
	

}
