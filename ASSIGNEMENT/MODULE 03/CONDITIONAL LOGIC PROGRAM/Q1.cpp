// Q(01) Write a C program to accept two integers and check whether they are equal or not......

#include<stdio.h>

main()
{
	int a,b;					// data member...
	
	printf("enter a number:");
	scanf("%d",&a);
										// two input...
	printf("\nenter b number:");
	scanf("%d",&b);
	
	if(a==b)									// a==b number is equal....
	{
		printf("\nnumber are equal.");
	}
	else
	{
		printf("\nnumber are not equal.");
	}
}
