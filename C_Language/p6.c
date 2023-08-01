#include<stdio.h>


main()
{
	
	char name[100];
	char location[100];
	int age;
	
	
	printf("Enter name ");
	gets(name);
	printf("Enter age ");
	scanf("%d",&age);
	printf("Enter location ");
	fflush(stdin); // to handle buffer values
	gets(location);
	
	printf("\n%s \n",name);
	printf("\n%s \n",location);
	printf("\n%d \n",age);
}