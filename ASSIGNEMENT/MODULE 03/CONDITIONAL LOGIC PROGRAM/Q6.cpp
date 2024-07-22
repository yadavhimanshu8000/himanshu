// Q(06) Find the Character Is Vowel or No.....

#include<stdio.h>

main()
{
	char num;					// data member...
	
	printf("enter the character: ");
	scanf("%c",&num);
	
 		if (num == 'a' || num == 'e' || num == 'i' ||  
            num == 'o' || num == 'u') 						// condition with (or) operator...
	{
		printf(" this is vowel..... ");
	}
	else
	{
		printf("not a vowel......");
	}
}
