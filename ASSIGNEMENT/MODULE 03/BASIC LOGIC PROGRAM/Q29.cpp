//Q(29) convert minutes into second and hours.....

#include<stdio.h>

main()
{
	int minutes,second,hours;			// data members....
	
	printf("enter the minutes:");
	scanf("%d",&minutes);
	
	second=minutes*60;				// formulas convert minutes into second and hours.....
	hours=minutes/60;
	{
	
	
	printf("convert second:%d",second);
	printf("\nconvert hours:%d",hours);
	}
}
