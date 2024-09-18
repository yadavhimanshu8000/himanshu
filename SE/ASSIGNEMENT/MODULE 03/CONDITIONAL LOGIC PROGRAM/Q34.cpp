// Q(34) Accept month number and display month name


#include<stdio.h>

main()
{
	int month;		///data member....
	
	printf("enter the number of month:");
	scanf("%d",&month);
	
	if(month==1)					// condition of if and multiple else if......
	{
		printf("\njanuary...");
	}
	else if(month==2)
	{
		printf("\nfebruary...");
	}
	else if(month==3)
	{
		printf("\nmarch...");
	}
		else if(month==4)
	{
		printf("\napril...");
	}
	else if(month==5)
	{
		printf("\nmay...");
	}
		else if(month==6)
	{
		printf("\njune...");
	}
	else if(month==7)
	{
		printf("\njuly...");
	}
		else if(month==8)
	{
		printf("\naugust...");
	}
	else if(month==9)
	{
		printf("\nseptember...");
	}
		else if(month==10)
	{
		printf("\noctober...");
	}
	else if(month==11)
	{
		printf("\nnovember...");
	}
		else if(month==12)
	{
		printf("\ndecember...");
	}
	else
	{
		printf("\ninvalid month number....");
	}
	
}
