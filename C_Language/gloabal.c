#include<stdio.h>

//it is a global variable
float num1,num2;

//global function
float add(float a,float b)
{
	float x=a;
	float y=b;
	return x+y;
}

main()
{
	printf("Enter 2 numbers \n");
	scanf("%f %f",&num1,&num2);
	printf("addition is :%f",add(num1,num2));
}