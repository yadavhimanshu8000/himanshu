// Q(08) WAP to accept the height of a person in centimeters and
 
											//	categorize the person according to their height......

#include<stdio.h>

main()
{
	int height;					//data member....
	
	printf("enter height in centimeter:");
	scanf("%d",&height);
	
	if(height>=152 && height<=182)			//condition of if and multiple else if...
	{
		printf("average height....");
	}
	else if(height>=183 && height<=200)
	{
		printf("taller height....");
	}
	else if(height>=100 && height<=151)
	{
		printf("below average height....");
	}
	else if(height>=50 && height<=99)
	{
		printf("smaller height.....");
	}
	else
	{
		printf("invalid height....");
	}
}
