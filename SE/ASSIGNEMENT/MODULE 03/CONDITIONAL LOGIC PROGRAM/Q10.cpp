// Q(10) WAP to check whether a number is negative, positive or zero.....


#include<stdio.h>

main()
{
	int num;				// data member...
	
	printf("enter the number :");
	scanf("%d",&num);
	
	if(num==0)								// if else condition....
	{
		printf("number is zero....");
	}
	else if(num>0)
	{
		printf("number is positive....");
	}
	else
	{
		printf("number is negative...");
	}
}
