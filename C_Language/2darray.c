#include<stdio.h>

int main()
{
	
	int marks[3][3];
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&marks[i][j]);
		}
	}
	
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",marks[i][j]);
		}
		printf("\n");
		printf("\n");
		printf("\n");
	}
	
	
}