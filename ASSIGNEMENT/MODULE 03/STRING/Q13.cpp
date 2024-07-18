// Q(13)Write a program in C to remove characters from a string except alphabets.....

#include<stdio.h>

main()
{
	char a[30];
	int i,j;

	
	printf("enter the string:");			// input.....
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
								// using condition......
		while(!(a[i]>='a' && a[i]<='z') && ! (a[i]>='A' && a[i]<='Z') && ! (a[i]=='\0') && ! (a[i]=='.'))
		{
			for(j=i;a[j]!='\0';j++)
			{
				a[j]=a[j+1];			
			}
			a[j]='\0';
		}
	}
	
	printf(" Removing all the Characters except Alphabets String: %s",a);
	
		
}
	
