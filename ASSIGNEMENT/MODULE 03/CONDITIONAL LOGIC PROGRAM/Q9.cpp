// Q(09) C Program to Check Uppercase or Lowercase or Digit or Special Character.....


#include<stdio.h>

main()
{
	char a;
	
	printf("enter the anything:");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z')
	{
		printf("uppercase.... ");
	}
	else if(a>='a' && a<='z')
	{
		printf("lowercase....");
	}
	else if(a>=1 && a<=9)
	{
		printf("digit.... ");
	}
	else 
	{
		printf("special character.....");
	}
	
}
