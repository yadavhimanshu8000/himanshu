// Q(35) Accept the input month number and print number of days in that....


#include<stdio.h>

main()
{
	int num;
	
		printf("enter month of number:");
		scanf("%d",&num);
		
	if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12 )
	
	{
		printf(" \n31 days in a month...");
	}
	else if(num==2)
	{
		printf("\n28days and 29days in a month.....");
	}
	else if(num==4 || num==6 ||num==9 || num==11)
	{
		printf("\n30days in a month.....");
	}
	else
	{
		printf("\ninvalid month number.....");
	}
}
