//Q(26) convert temperature fahrenheit to celsius...

#include<stdio.h>

main()
{
	int c,f;
	{
		printf("enter fahrenheit:");
		scanf("%d",&f);
		
		c=(f-32)/1.8;			//formula
		
		printf("celsius %d.",c);
		
	}
}
