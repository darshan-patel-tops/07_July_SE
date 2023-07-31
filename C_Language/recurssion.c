#include<stdio.h>

//recurssion means re accurance of something
// the function that calls itself again again

int number(int a)
{
	if(a>=0)
	{
		
	printf("%d \n",a); 
	a--;
	number(a);
	}
	else
	{
		printf("Task complete ");
	}
}


main()
{
	number(5);
}