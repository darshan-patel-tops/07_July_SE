#include<stdio.h>

void bowler()
{
	float matches;
	float runs;
	float wickets;
	float overs;
	
	
	printf("Enter your matches \n");
	scanf("%d",&matches);
	printf("Enter your runs \n");
	scanf("%d",&runs);
	printf("Enter your wickets \n");
	scanf("%d",&wickets);
	printf("Enter your overs \n");
	scanf("%d",&overs);
	
	
	float average;
	average = runs/wickets;
	
	float economy;
	economy = runs/overs;
	
	printf("\nyour economy is %f",economy);
	printf("\nyour average is %f",average);
	
}
void batsman()
{
	
	float matches;
	float runs;
	float notout;
	
	printf("Enter your total matches \n");
	scanf("%f",&matches);
	
	printf("Enter your runs \n");
	scanf("%f",&runs);
	
	printf("Enter notout innings \n");
	scanf("%f",&notout);
	
	matches = matches-notout;
	float average;
	
	average = runs/matches;
	
	printf("Your Average is: %.2f",average);
	
}


void basic()
{
	char name[13];
	char location[13];
	int age;
	
	printf("Enter your Name:\n");
	gets(name);
	
	
	printf("Enter your Location:\n");
	gets(location);
	
	printf("Enter your Age: \n");
	scanf("%d",&age);
	
	
	
}


main()
{
	basic();
	
	batsman();
	
	bowler();
	
}