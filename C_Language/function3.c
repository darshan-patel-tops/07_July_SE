#include<Stdio.h>


void circle()
{
	float pi=3.14,r;
	
	printf("Enter Value of Radius: \n");
	scanf("%f",&r);
	
	printf("Area is : %f",pi*r*r);
}
void square()
{
	int a;	
	printf("Enter Value of side: \n");
	scanf("%d",&a);
	
	printf("Area is : %d",a*a);
}
void rectangle()
{
	int l,b;	
	printf("Enter Value of side: \n");
	scanf("%d %d",&l,&b);
	
	printf("Area is : %d",l*b);
}




int main()
{
	int choice;
	printf("Enter choice \n");
	scanf("%d",&choice);
	
	
	
	if(choice == 1)
	{
		circle();
	}
	else if(choice == 2)
	{
		rectangle();
	}
	else if(choice ==3 )
	{
		square();
	}
	else
	{
		printf("invalid choice");
	}
}