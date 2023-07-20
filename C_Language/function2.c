#include<stdio.h>


/*

2 types of function

1: user defined function
2: system defined function/pre-defined

	a) With Arguement
	b) without arguement


*/


int circle()
{
	float pi=3.14,r;
	
	printf("Enter Value of Radius: \n");
	scanf("%f",&r);
	
	printf("Area is : %f",pi*r*r);
}


int main()
{
	
	circle();
	
}