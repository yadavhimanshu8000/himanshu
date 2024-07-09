// Q(06) Find the Character Is Vowel or No.....

#include<stdio.h>

main()
{
	char num;
	
	printf("enter the character: ");
	scanf("%c",&num);
	
 		if (num == 'a' || num == 'e' || num == 'i' ||  
            num == 'o' || num == 'u') 
	{
		printf(" this is vowel..... ");
	}
	else
	{
		printf("not a vowel......");
	}
}
