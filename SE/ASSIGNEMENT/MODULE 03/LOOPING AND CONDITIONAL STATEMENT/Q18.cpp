/*Q(18) Write a C Program to Print the Multiplication Table of N....
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50*/

#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)				// loop for number ..
	{
		printf("\n %d * %d = %d",n,i,n*i);			// print the table
	}
}
