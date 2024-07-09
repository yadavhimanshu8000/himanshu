#include<stdio.h>

add(int a, int b)
{
	printf("%d",a);
	printf("\n%d",b);
	
	printf("\naddition:%d",a+b);
}






main()
{
	int c,d;
	
	printf("enter c:");
	scanf("%d",&c);
	
	printf("enter b:");
	scanf("%d",&d);
	
	add(c,d);
}
