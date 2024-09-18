// Q(37(2))Vowel or Consonant using switch case

#include<stdio.h>

main()

{
	char z;				//data member....
	
	printf("enter the character:");
	scanf("%c",&z);
	
	switch(z)				// condition using switch case....
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
