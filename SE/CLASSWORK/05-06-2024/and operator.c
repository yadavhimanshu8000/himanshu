#include"stdio.h"

main()
{
	int a,b,c;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("enter c:");
	scanf("%d",&c);
	
	if ((a>b) && (a>c))
	{
		printf("%d a is greater",a);
	}
	else if ((b>a )&& ( b>c))
	{
		printf("%d b is greater",b);
	}
	else
	{
		printf("%d c is greater",c);
	}
}
