#include<stdio.h>
int main()
{
	char name[20];
	int marks[5];
	int total=0;
	printf("enter your name \n");
	scanf("%s",name);
	
	for(int i=0;i<5;i++)
	{
		printf("\nEnter your marks \n");
		scanf("%d",&marks[i]);
		total = total + marks[i];
	}
	printf("\ntotal is %d",total);
}