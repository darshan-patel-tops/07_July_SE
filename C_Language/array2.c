#include<stdio.h>

int main()
{
	
	int marks[5];
	printf("Enter Marks \n");
	
	for(int i=0;i<5;i++)
	{
	printf("Enter marks of student %d \n",i+1);
	scanf("%d",&marks[i]);	
	}	
	
	for(int i=0;i<5;i++)
	{
		printf("marks of student %d \n",i+1);
		printf("%d \n",marks[i]);
	}
	
	
}