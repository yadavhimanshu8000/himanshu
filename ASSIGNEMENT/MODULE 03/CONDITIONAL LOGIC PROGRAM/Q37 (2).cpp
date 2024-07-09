#include<stdio.h>

main()

{
	char z;
	
	printf("enter the character:");
	scanf("%c",&z);
	
	switch(z)
	{
		case 'a':
			{
				printf("\n vowels.... character")	;
				break;
			}
		case 'e':
			{
				printf("\n vowels....character");
				break;
			}
		case 'i':
			{
				printf("\n vowels....character");
				break;
			}
		case 'o':
			{
				printf("\n vowels....character");
				break;
			}
		case 'u':
			{
				printf("\n vowels....character");
				break;
			}
			
		default:
			{
				printf("\n consonant....character");
				break;
			}
	}
}
