#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter a number:");		//10
	scanf("%d",&a);
	
	printf("enter b number:");		//20
	scanf("%d",&b);
	
	a=a*b;			//200
	b=a/b;			//10
	a=a/b;			//20
	
	printf("swapping two number:\nA= %d\nB=%d",a,b);
	
	
	
	
}
