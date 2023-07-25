#include<stdio.h>

main()
{
	int num1,num2;
	printf("Enter 2 numbers \n");
	scanf("%d %d",&num1,&num2);

	printf("\n Num1 is : %d",num1);
	printf("\n Num2 is : %d",num2);

	num1 = num1 + num2; //300
	num2 = num1 - num2; //100
	num1 = num1 - num2; //100
	
	printf("\nAfter exchange \n");
	printf("\n num 1 is : %d",num1);
	printf("\n num 2 is : %d",num2);

}