#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the year : ");
	scanf("%d",&a);
	
	printf("the days: %d",a*365);
	
	printf("\nenter the days:");
	scanf("%d",&b);
	
	printf("the year:%.2f ",(float)b/365);
}
