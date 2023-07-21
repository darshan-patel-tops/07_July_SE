#include<stdio.h>
main()
 {
 	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		for(int a=0;a<=i;a++)
		{
			printf(" * ");
		}
		printf("\n");
	}
 }