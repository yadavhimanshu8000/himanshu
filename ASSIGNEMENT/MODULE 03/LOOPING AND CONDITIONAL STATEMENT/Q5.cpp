// Q(5) WAP to print factorial of given number....

#include<stdio.h>

main()
{
	int num,i,fact=1;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)   			
	{
		fact=fact*i;
	}
	printf("%d factorial...",fact);
}
