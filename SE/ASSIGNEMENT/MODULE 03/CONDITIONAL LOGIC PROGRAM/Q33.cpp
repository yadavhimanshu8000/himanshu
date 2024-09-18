//Q(33) WAP to input the week number and print week day....

#include<stdio.h>

main()
{
	int day;				// data member.....
	
	printf("enter a number of week:");
	scanf("%d",&day);
	
	if(day==1)					///condition...... multiple else if
	{
		printf("\nsunday....");
	}
	else if(day==2)
	{
		printf("\nmonday....");
	}
	else if(day==3)
	{
		printf("\ntuesday....");
	}
	else if(day==4)
	{
		printf("wednesday....");
	}
	else if(day==5)
	{
		printf("\nthursday...");
	}
	else if(day==6)
	{
		printf("\nfriday....");
	}
	else if(day==7)
	{
		printf("\nsaturday....");
	}
	else
	{
		printf("\ninvalid week number.");
	}
	
}
