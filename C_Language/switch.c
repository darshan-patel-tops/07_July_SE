#include<stdio.h>

int main()
{
	
	
	/*
	switch(variable/parameter)
	{
	case :
	statement
	break;
	
	default:
	statement 
	break;
	}
	*/
	
	
	int day;
	
	printf("Enter a number \n");
	scanf("%d",&day);
	
	
	switch(day)
	{
		case 1:
			printf("Monday \n");
			break;
		case 2:
			printf("tuesday \n");
			break;
		case 3:
			printf("wednesday \n");
			break;
		case 4:
			printf("thursday \n");
			break;
		case 5:
			printf("friday \n");
			break;
		case 6:
			printf("saturday \n");
			break;
		case 7:
			printf("sunday \n");
			break;
			
		default :
			printf("invalid number \n");
			break;
	}
	
	
}