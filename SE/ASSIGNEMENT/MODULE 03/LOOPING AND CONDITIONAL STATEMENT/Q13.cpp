// Q(13) calculate the Factorial of a Given Number using while loop....

#include<stdio.h>

main()
{
	int i=1,n,fact=1;								//data member...
	
	printf("enter the number :");
	scanf("%d",&n);
	
	while(i<=n)										//using while loop
	{
		fact=fact*i;
		i++;										//increment....
	}
	printf(" factorial...%d",fact);
}
