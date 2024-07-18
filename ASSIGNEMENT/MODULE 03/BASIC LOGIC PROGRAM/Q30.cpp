//Q(30) convert year into days and days into year.....

#include<stdio.h>

main()
{
	int year,days;							// data member....
	
	printf("enter the year:");
	scanf("%d",&year);
	
	days=year*365;							// formulass of convert year into days 
	{
		printf("convert in days:%d",days);
		
	}
	
	printf("\nenter the days:");
	scanf("%d",&days);
	
	year=days/365;							//formulass of and days into year.....
	
	printf("convert in year :%d",year);
	
	
	
}
