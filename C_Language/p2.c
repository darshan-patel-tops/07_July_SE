#include<stdio.h>

float circle(float radius)
{
		printf("total is %f",3.14*radius*radius);
}




main()
{
	float radius;
	
	float pi=3.14;
	
	printf("Enter radius");
	scanf("%f",&radius);
	
	circle(radius);
}