#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the number1:");
	scanf("%d",&a);
	
	printf("enter the number2:");
	scanf("%d",&b);
	
	printf("enter the number3:");
	scanf("%d",&c);
	
	a>b? (a>c?printf("a is greater.."):printf("c is greater...")): (b>c?printf("b is greater"):printf("c is greater"));
}
