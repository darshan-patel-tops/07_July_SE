#include<stdio.h>

float add(float a,float b)
{
	return a+b;
}
float sub(float a,float b)
{
	return a-b;
}
float mul(float a,float b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}


main()
{
	int choice;
	printf("Enter choice: \n");
	scanf("%d",&choice);
	
	printf("Enter 2 numbers \n");
	float num1,num2;
	scanf("%f %f",&num1,&num2);
	
	if(choice == 1)
	{
		printf("Add is :%f",add(num1,num2));
	}
	else if(choice == 2)
	{
		printf("Sub is :%f",sub(num1,num2));
	}
	else if(choice == 3)
	{
		printf("Mul is :%f",mul(num1,num2));
	}
	else if(choice == 4)
	{
		printf("Div is :%f",div(num1,num2));
	}
	else if(choice == 5)
	{
		printf("Mod is :%f",mod(num1,num2));
	}
}