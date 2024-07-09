#include<stdio.h>

add()

{
	int a,b;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	printf("\nenter the number:");
	scanf("%d",&b);
	
	printf("\n addition %d",a+b);
	
}

sub()
{
		int a,b;
		
	printf("\nenter the number:");
	scanf("%d",&a);
	
	printf("\nenter the number:");
	scanf("%d",&b);
	
	printf("\n sub %d",a-b);
}
mul()
{
		int a,b;
		
	printf("\nenter the number:");
	scanf("%d",&a);
	
	printf("\nenter the number:");
	scanf("%d",&b);
	
	printf("\nmulti %d",a*b);
}

main()
{
	add();
	sub();
	mul();
}

