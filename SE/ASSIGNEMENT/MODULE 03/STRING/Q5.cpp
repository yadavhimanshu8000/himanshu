//Q(05)Write a program in C to compare two strings without using string library functions.

#include<stdio.h>

main()
{
	char a[30],b[30];			// two string...
	
	int i,j;
	
	printf("enter the character1:");			//input a
	gets(a);
	
	printf("\nenter the character2:");			// input b
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])				//compare a and b.....
		
		j=1;
		
		else
		
		j=0;
		break;
	}
	
	if(j==1)
	{
		printf("\nstring A and string B are same character...");
	}
	
	else
	{
		printf("\nstring A and string B are not same character...");
	}
}

