//Q(7)Write a program in C to copy one string to another string....

#include<stdio.h>
#include<string.h>

main()
{
	char a[30],b[30];			// two input a and b...
	
	printf("enter the character1:");
	gets(a);
	
	printf("\nenter the character2:");
	gets(b);
	
	
		// b copy in a....
	strcpy(b,a);					// copy one string to another string with strcpy....
	
	printf("\nafter copy the string .....\n");
	
	printf(" \nstring A:%s",a);
	printf(" \nstring B:%s",b);
	
	
}

