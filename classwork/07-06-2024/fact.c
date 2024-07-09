#include<stdio.h>

main()
{
	int n,i,fact;
	
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	
	fact=fact*i;
	printf("factorial number is:%d",fact);
}
