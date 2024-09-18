//Q(4)WAP to find factorial using recursion

#include<stdio.h>

fact(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)			//using loop
	{
			fact*=i;
	}
	return fact;			//with return

}

main()
{
	int a;
{
		
	printf("\nenter the number:");
	scanf("%d",&a);
}
printf("\nfactorial %d",fact(a));			//calling
	
}
