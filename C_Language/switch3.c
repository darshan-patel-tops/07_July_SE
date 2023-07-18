#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter your marks :\n");
	scanf("%d",&marks);
	
	switch(marks/10)
	{
		case 10:
		case 9:
			printf("A++");
//			break;
//			printf("A+");
			break;
		case 8:
			printf("A");
			break;
		default:
		printf("Invalid marks \n");	
	
	
	}
}