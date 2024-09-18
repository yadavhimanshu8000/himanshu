#include<stdio.h>

fact()
{
	int n,i,fact=1;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact*=i;
		
	}
	return fact;
}




main()
{
	printf("\n \nfactorial=%d",fact());
	
}
