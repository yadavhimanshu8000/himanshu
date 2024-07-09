// Q(13) calculate the Factorial of a Given Number using while loop....

#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf(" factorial...%d",fact);
}
