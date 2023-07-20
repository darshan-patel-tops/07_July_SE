#include<Stdio.h>
int main()
{
	int a,b;
	printf("Enter Value of side \n");
	scanf("%d %d",&a,&b);
	
	square(a,b);
	
	
}

void square(int side,int length)
{
	printf("area is: %d",side*length);
//	return side*side;
}