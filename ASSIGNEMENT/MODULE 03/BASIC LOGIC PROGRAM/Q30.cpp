//Q(30) convert year into days and days into year.....

#include<stdio.h>

main()
{
	int year,days;
	
	printf("enter the year:");
	scanf("%d",&year);
	
	days=year*365;
	{
		printf("convert in days:%d",days);
		
	}
	
	printf("\nenter the days:");
	scanf("%d",&days);
	
	year=days/365;
	
	printf("convert in year :%d",year);
	
	
	
}
