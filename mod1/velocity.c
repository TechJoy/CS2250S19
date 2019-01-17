#include<stdio.h>

int main ()
{
	double distance = 0;
	double time = 0;
	double velocity; 

	// 1) Ask for distance in meters
	
	printf("Enter deistance in meters\n");
	scanf("%lf", &distance);

	// 2) Aak for time in seconds
	
	printf("Enter time in seconds\n");
	scanf("%lf", &time);

	// 3)Calculate and Diesplay the velocity in km/hr
	
	velocity = (distance / 1000.0) / ( time / 3600.0);

	printf("The velocity is %lf km/hr\n", velocity);



	return 0;
}
