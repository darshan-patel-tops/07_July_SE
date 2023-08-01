#include<stdio.h>

total(int num1,int num2)
{
	printf("Total is : %d",num1+num2);
}
main()
{
	int a,b;
	printf("Enter 2 values :");
	scanf("%d %d",&a,&b);
	
	total(a,b);
}