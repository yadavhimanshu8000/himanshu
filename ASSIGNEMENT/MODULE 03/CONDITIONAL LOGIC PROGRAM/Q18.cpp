// Q (18) Write a C program to calculate profit and loss on a transaction.....

#include<stdio.h>

main()
{
	int c,s;
	
	printf("enter the costprice:");
	scanf("%d",&c);
	
	printf("enter the selling:");
	scanf("%d",&s);
	
	if(c<s)
	{
		printf("\n you are in profit transaction...");
	}
	else if(c>s)
	{
		printf("\n you are in loss transaction.....  ");
	}
	else
	{
		printf(" \n no loss no profit....");
	}
}
