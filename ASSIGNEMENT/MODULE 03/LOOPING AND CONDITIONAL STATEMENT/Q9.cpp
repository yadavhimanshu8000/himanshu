// Q(09)Write a program make a summation of given number (E.g., 1523 Ans: -11).....

#include<stdio.h>

main()
{
	int n,sum=0;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	while(n!=0)				//// run loop until num is zero.....
	{
		sum=sum+n%10;		
		n=n/10;
	}
	printf("%d",sum);
}
