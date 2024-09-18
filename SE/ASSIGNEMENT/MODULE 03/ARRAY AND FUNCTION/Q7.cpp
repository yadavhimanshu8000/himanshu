m// Q(07) WAP Find out length of string without using inbuilt function....

#include<stdio.h>

main()
{
	char a[30];							// data member...
	int i;
	
	printf("enter the character:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++);				// using loop string....
	

		{

		printf("length of string... %d",i);       // print in %d for lenght of string.....
	
		}
}
