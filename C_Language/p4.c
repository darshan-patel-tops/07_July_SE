#include<stdio.h>

main()
{
	
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	
	if(age>15 && age<30)
	{
		if(age>=15 && age<=20)
		{
			printf("young  people");
		}
		else if(age>=21 && age<=25)
		{
			printf("mature with energy");
		}
		else
		{
			printf("aap keeping kro");
		}
	}
	else
	{	
		if(age>=0 && age<15)
		{
			if(age>=0 && age<=5)
			{
				printf("dudh pio");
			}
			else
			{
		printf("abhi padhai kro");
			}
	}
	else
	{
		printf("chacha ghar bethio");
		
	}
	
	}
	
	
	
	
//	if(age!=10)
//	{
//		printf("newborn");
//	}
//	else
//	{
//		printf("big boy");
//	}
	
//	if(age>0 && age<10)
//	{
//		printf("child");
//	}
//	
//	else if(age>10 && age<=18)
//	{
//		printf("Teen");
//	}
//	else if(age>18 && age<25)
//	{
//		printf("mature");
//	}
//	else
//	{
//		printf("adult");
//	}
	
}