// Q(13)WAP to accept 5 numbers from user and check entered number is even or odd using of array...


#include<stdio.h>

main()
{
	int a[5],i;
	
	printf("enter the five number:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("--------------------------------\n");
	
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
		{
			printf("%d.",i+1);
			printf("%d is zero..\n",a[i]);
		}
		else if(a[i]%2==0)
		{
			printf("%d.",i+1);
			printf("%d is even..\n",a[i]);
		}
		else
		{
			printf("%d.",i+1);
			printf("%d is odd..\n",a[i]);
		}
	}
}
