// Q(4) WAP to print table up to given numbers......


#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	
	{
		printf(" \n%d*%d=%d",n,i,n*i);
	}
}
