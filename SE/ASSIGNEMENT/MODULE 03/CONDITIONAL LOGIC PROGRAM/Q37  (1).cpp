// Q(37) WAP to show

//i. Monday to Sunday using switch case

#include<stdio.h>

main()
{
	int day;			// data member....
	
	printf("enter the number:");
	scanf("%d",&day);
	
	switch(day)					// condition using switch case.....
	{
		case 1:
			{
				printf("\nsunday....");
				break;
			}
		case 2:
			{
				printf("\nmonday....");
				break;
			}
		case 3:
			{
				printf("\ntuesday....");
				break;
			}
		case 4:
			{
				printf("\nwednesday...");	
				break;
			}
		case 5:
			{
				printf("\nthusday....");
				break;
			}
		case 6:
			{
				printf("\nfriday.....");
				break;
			}
		case 7:
			{
				printf("\nsaturday....");
				break;
			}
			
		default:
				printf("\ninvalid week...");
				break;
			
		
		
	}
}
