#include<stdio.h>

main()
{
	
	char name[20];
	
	
	printf("Enter your name:\n");
	gets(&name);
//	scanf("%s",&name);
	
	printf("You Entered : %s",name);
	
}