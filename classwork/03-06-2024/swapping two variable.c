#include<stdio.h>

main()

{
	int a,b;
	
	printf("enter a:");			//20
	scanf("%d",&a);
	
	printf("enter b:");			//30
	scanf("%d",&b);
	
	a=a+b;			//50
	b=a-b;			//20
	a=a-b;			//30
	
	printf("\nswap a: %d",a);
	printf("\nswap b: %d",b);
	
	
	
}
