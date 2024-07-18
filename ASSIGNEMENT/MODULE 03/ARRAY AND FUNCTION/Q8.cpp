// Q(8)WAP to reverse a string and check that the string is palindrome or not....

#include<stdio.h>

main()
{
	char a[30],r[30];
	int i,j,l;

	
	printf("\n enter the characater:");
	gets(a);
      
	for(i=0;a[i]!='\0';i++);
		l=i;
	for(i=0;a[i]!='\0';i++)
	
	{
		l--;
		r[l]=a[i];	
	}
	
	for(i=0;a[i]!='\0';i++)
	
	{
		if(a[i]==r[i])
		j=1;
	
	else
     	{
			j=0;
   		}
	}
	
	if(j==1)
	{
		printf("\npalindrome ...");
	}
	else
	{
		printf("\n not a palindrome...");
	}
	
}


