//Q(05) Check Number Is Positive or Negative......

#include<stdio.h>

main()
{
	int num;				//data member...
	
	printf("enter a number.....:");
	scanf("%d",&num);
	
	if(num>=0)					// condition...
	{
		printf("number is positive.");
		
	}
	else
	{
		printf("number is negative.");
	}
}
