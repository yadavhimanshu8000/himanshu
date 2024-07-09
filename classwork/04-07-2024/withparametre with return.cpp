#include<stdio.h>

 fact(int b)
{
	int i,fact=1;
	

	for(i=1;i<=b;i++)
	{
		fact*=i;
		
	}
	return fact;
}


main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	
}
