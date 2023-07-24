#include<stdio.h>

int main()
{
	int marks[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter marks of  [%d]  [%d] \n",i,j);
			scanf("%d",&marks[i][j]);
		}
		printf("\n");
	}
	
}