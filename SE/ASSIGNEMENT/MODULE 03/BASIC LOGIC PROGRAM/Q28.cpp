//Q(28) convert year into days and months.....

#include<stdio.h>

main()
{
	int year,days,month;		// data members....
	
	
		printf("enter a year:");
		scanf("%d",&year);
		
		days=year*365;			// formulass year convert into day and month...
		month=year*12;
		
		printf("convert days:%d ",days);
		printf("\nconvert month: %d",month);
		
	
}
