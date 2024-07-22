// Q(8)WAP to reverse a string and check that the string is palindrome or not....

#include<stdio.h>

main()
{
	char a[30],r[30];						// data member....
	int i,j,l;

	
	printf("\n enter the characater:");
	gets(a);
      
	for(i=0;a[i]!='\0';i++);						// print
		l=i;
	for(i=0;a[i]!='\0';i++)
	
	{
		l--;
		r[l]=a[i];	
	}
	
	for(i=0;a[i]!='\0';i++)
	
	{
		if(a[i]==r[i])								// using if else condition...
		j=1;
	
	else
     	{
			j=0;
   		}
	}
	
	if(j==1)
	{
		printf("\npalindrome ...");					// print... palindrome
	}
	else
	{
		printf("\n not a palindrome...");
	}
	
}


