// Q(16)  Convert country's name in abbreviate form...

#include<stdio.h>

main()
{
	char a[30];
	
	printf("enter country name:");
	gets(a);				// user input..
	
	
	
						//print abbreviated form of country name....
	printf("\n%c%c%c",a[0],a[1],a[2]);
}
