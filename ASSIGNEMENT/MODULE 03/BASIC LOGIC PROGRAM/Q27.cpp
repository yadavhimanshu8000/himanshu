//Q(27) convert days into month.....

#include<stdio.h>

main()
{
	float days, month;
	
	printf("enter the days:");
	scanf("%f",&days);
	
	month=days/30;
	{
		printf("convert into month %.2f",(float)month);
	}
}
