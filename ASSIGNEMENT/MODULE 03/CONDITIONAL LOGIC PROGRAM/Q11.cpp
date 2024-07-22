// Q(11) WAP to find number is even or odd using ternary operator...

#include<stdio.h>

main()
{
	int a;					// data member...
	
	printf("enter the number:");
	scanf("%d",&a);
	
	(a%2==0)?				// condition.... with ternary... operator..
	
		printf("number is even.....")
		:printf("number is odd.....");
		
	
}
