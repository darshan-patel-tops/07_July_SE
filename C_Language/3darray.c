#include<stdio.h>

main()
{
	
	int marks[2][2][2];
	int marks1[2][2][2];
	
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				printf("Enter number at index [%d][%d][%d]\n",i,j,k);
				scanf("%d",&marks[i][j][k]);
			}
		}
	}
	
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				printf("Enter number at index [%d][%d][%d]\n",i,j,k);
				scanf("%d",&marks1[i][j][k]);
			}
		}
	}
	
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				printf("Enter number at index %d\n",marks[i][j][k]+marks1[i][j][k]);
			}
		}
	}
	
}