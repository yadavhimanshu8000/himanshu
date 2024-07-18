//Q(26) convert temperature fahrenheit to celsius...

#include<stdio.h>

main()

{
	int c,f;				// data member...
	{
		printf("enter fahrenheit:");
		scanf("%d",&f);
		
		c=(f-32)/1.8;			//formula of temperature fahrenheit to celsius...
		
		printf("celsius %d.",c);
		
	}
}
