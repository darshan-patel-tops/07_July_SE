#include<stdio.h>

int cube(int c)
{
	//Function always returns something
//	printf("%d",c*c*c);
	return c*c*c;
}


int main()
{
	int number;
	
	printf("Enter a number \n");
	scanf("%d",&number);
	
	int area = cube(number);
	printf("this statemrnt %d",area);
	
//	return 0;
	
}