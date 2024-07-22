
#include<stdio.h>

factorial(int x)
{
	int i,fact=1;
	
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
		
		
	}
	printf("\n factorial...%d\n",fact);
}

prime(int y)
{
	int i,count=0;
	
	for(i=1;i<=y;i++)
	{
		if(y%i==0)
		count++;
		
	}
	if(count==2)
		{
			printf("\n number is prime..%d\n",y);
		}
		else
		{
			printf("\n number is not prime...%d\n",y);
		}
}



main()
{
	int x,y;
	
	printf("\nenter the number:\n");
	scanf("%d",&x);
	
	printf("\nenter the number:\n");
	scanf("%d",&y);
	
	factorial(x);
	
	prime(y);	
}
