#include<stdio.h>

//function is used to help us code faster and re-usability of code
/*

datatype function name()
{
	
}

*/
int plus()
{
		int num1,num2;
	printf("Enter number 1 : \n");
	scanf("%d",&num1);
	printf("Enter number 2 : \n");
	scanf("%d",&num2);
	printf("Total is : %d \n",num1+num2);
}
int main()
{
plus();
plus();
}