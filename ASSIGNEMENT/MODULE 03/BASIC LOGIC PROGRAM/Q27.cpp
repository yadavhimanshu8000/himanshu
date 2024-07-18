//Q(27) convert days into month.....

#include<stdio.h>

main()
{
	float days,month;			// data member....
	
	printf("enter the days:");
	scanf("%f",&days);
	
	month=days/30;					// using formulass.......
	{
		printf("convert into month %.2f",(float)month);		// using float member....
	}
}
