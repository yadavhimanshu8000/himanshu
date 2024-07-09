// Q(01) Write a C program to accept two integers and check whether they are equal or not......

#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter a number:");
	scanf("%d",&a);
	
	printf("\nenter b number:");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\nnumber are equal.");
	}
	else
	{
		printf("\nnumber are not equal.");
	}
}
