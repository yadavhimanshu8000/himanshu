#include<stdio.h>

main()
{
	int a,b,c,d,e;
	int fact=1;
	int i;
	
	printf("enter first number :\n");
	scanf("%d",&a);
	
	printf("enter second number:\n");
	scanf("%d",&b);
	
	printf("enter third number:\n");
	scanf("%d",&c);
	
	printf("enter forth number:\n");
	scanf("%d",&d);
	
	printf("enter fifth number:\n");
	scanf("%d",&e);
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial.... a= %d",fact);
	
	fact=1;
	
	for(i=1;i<=b;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial.... b= %d",fact);
	
		fact=1;
	
	for(i=1;i<=c;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial.... c= %d",fact);
	
		fact=1;
	
	for(i=1;i<=d;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial.... d= %d",fact);
	
		fact=1;
	
	for(i=1;i<=e;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial.... e= %d",fact);
		
}
