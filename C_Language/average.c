#include<stdio.h>

int average()
{
	float match,notout,runs;
	
	
	printf("Enter total matches: ");
	scanf("%f",&match);

	printf("Enter total notout:");
	scanf("%f",&notout);
	
	printf("Enter total runs");
	scanf("%f",&runs);
	
	float average=0;
	
	
	match = match-notout;
	
	average = runs/match;
	
	printf("Total average is: %f",average);

}



main()
{
	average();
}