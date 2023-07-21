#include<stdio.h>

int main()
{
	
	int marks1[3][3];
	int marks2[3][3];
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		printf("Enter marks of 1st array\n");
		for(j=0;j<3;j++)
		{
			scanf("%d",&marks1[i][j]);
			printf("value of [%d] [%d]\n",i,j);
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("Enter marks of 2nd array\n");
		for(j=0;j<3;j++)
		{
			printf("value of [%d] [%d]\n",i,j);
			scanf("%d",&marks2[i][j]);
		}
	}
	
		for(i=0;i<3;i++)
		{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d ",marks1[i][j]+marks2[i][j]);
		}
		printf("\n");
		printf("\n");
		printf("\n");
	}
	
	
}