// Q(03) WAP to check if the given year is a leap year or not.....

#include<stdio.h>

main()
{
	int year;			//data member....
	
	printf("enter a year:");
	scanf("%d",&year);
	
	if (year%4==0)				//condition...
	{
		printf(" leap year.");
	}
	else
	{
		printf("not a leap year");
	}
}
