// Q(14) Write a program in C to combine two strings manually....

#include<stdio.h>

main()
{
	char a[30],b[30];
	int i,j;
	
	printf("enter A string:");      				// inputs.....A...
	gets(a);
	
	printf("\nenter B string:");					// input......B...
	gets(b);
	
	for(i=0;a[i]!='\0';i++);					// using loop for A...
	
	for(j=0;b[j]!='\0';j++)						// using loop for B....
	{
		a[i]=b[j];								// stored in a.
		i++;
	}
	a[i]='\0';
	
	printf("\ncombine two strings: %s ",a);
	
}
