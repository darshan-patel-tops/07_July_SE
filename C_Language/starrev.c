#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
//			printf(" ** ");
			printf(" ");
		}
		for(int k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}