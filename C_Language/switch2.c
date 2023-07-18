#include<stdio.h>
int main()
{
	char alphabet;
	
	printf("Enter an alphabet \n");
	scanf("%c",&alphabet);
//	printf("you entered %c",alphabet);

	switch(alphabet)
	{
		case 'a':	
		case 'A':	
		case 'e':	
		case 'E':	
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("vowel \n");
			break;
		
			default:
			printf("\n consonant \n");
				
	}

}