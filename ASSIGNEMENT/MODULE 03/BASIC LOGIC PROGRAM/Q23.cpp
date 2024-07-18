// Q(23)WAP to calculate swap 2 numbers with using of multiplication and division.


#include<stdio.h>

main()
{
	int a,b;				// data member....
	
	printf("enter a number:");		// input=10...
	scanf("%d",&a);
	
	printf("enter b number:");		//input=20...
	scanf("%d",&b);
	
	a=a*b;			//200	// using of...
	b=a/b;			//10			      swapping the...
	a=a/b;			//20								 two number....
	
	printf("swapping two number:\nA = %d\nB = %d",a,b);
	
	
	
	
}
