//  Q(7) WAP to print number in reverse order e.g.: number = 64728 ---> reverse =  82746.....

#include<stdio.h>

main()
{
	int n,r;				//datamember....
	
	printf("enter the number:");
	scanf("%d",&n);									
	
	while(n>0)				//using while loop....
	{
		r=n%10;					//stored the reminder...	551
	
		printf(" %d",r);
		n=n/10;				// delete the last number..... 
	}
		
}
