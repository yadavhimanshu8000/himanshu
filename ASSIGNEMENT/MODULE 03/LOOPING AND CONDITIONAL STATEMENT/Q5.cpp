// Q(5) WAP to print factorial of given number....

#include<stdio.h>

main()
{
	int num,i,fact=1;      				// data member....
	
	printf("enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)   					//using for loop...
	{
		fact=fact*i;				//condition...
	}
	printf("%d factorial...",fact);
}
