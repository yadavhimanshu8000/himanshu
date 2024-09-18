// Q(12)WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>

main()
{
	int a,b,c;			//data member....
	
	printf("enter the number1:");
	scanf("%d",&a);
	
	printf("enter the number2:");
	scanf("%d",&b);
	
	printf("enter the number3:");
	scanf("%d",&c);
													// using ternary operator....
	a>b? (a>c?printf("a is greater.."):printf("c is greater...")): (b>c?printf("b is greater"):printf("c is greater"));
}
