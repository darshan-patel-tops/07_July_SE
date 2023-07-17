#include<stdio.h>

int main()
{
	
	/*
	
	function()
	{
	
	}
	
	AND 	response 1   response 2		answer
			true		  true			true
			false		  true			false
			true		  false			false
			false		  false			false
	
	OR 		response 1   response 2		answer
			true 		true 			true
			true		false 			true
			false 		true			true
			false 		false 			false
		*/
	
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	if(marks>=0 && marks<=100)
	{
		if(marks>=0 && marks<=33)
		{
			printf("fail");
		}
		 if(marks>=34 && marks<=50)
		{
			printf("second class");
		}
		 if(marks>=51 && marks<=70)
		{
			printf("first class");
			
		}
		 if(marks>=71 && marks<=100)
		{
			printf("distinction");
		}
	}
	else
	{
		printf("invalid marks");
	}
}