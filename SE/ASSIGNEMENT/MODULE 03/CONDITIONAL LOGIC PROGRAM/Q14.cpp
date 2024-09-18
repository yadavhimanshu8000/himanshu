// Q(14) WAP to find number is even or odd using ternary operator....

#include<stdio.h>

main()
{
	int a,b,c;			// data member...
	
	printf("enter first number:");
	scanf("%d",&a);
	
	printf("\nenter second number:");
	scanf("%d",&b);
	
	printf("\nenter third number:");
	scanf("%d",&c);
	
	if(a>b && a>c)					//condition.....
	{
		printf("\n A is greater number:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("\n B is greater number:%d",b);
	}
	else
	{
		printf("\n C is greater number:%d",c);
	}
}
