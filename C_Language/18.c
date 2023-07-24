#include<stdio.h>

int main()
{
	char days;
	
	printf("Enter a day \n");
	scanf("%c",&days);
	
	printf("%c \n",days);
	
	/*
	switch(condition)
	{
		case :
		statement;
		break;
	}
	*/
	
	switch(days)
	{
		case 'm':
			printf("monday");
			break;
		case 't':
			printf("tuesday");
			break;
		case 'w':
			printf("wednesday");
			break;
		default:
			printf("sunday \n");
	}
	
	
	
	
}