// Q(16) Accept 5 numbers from user and perform sum of array...

#include<stdio.h>

main()
{
	int a[5],i,sum=0;
	
	printf("enter the five number....\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	printf("-------------------------------\n");
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("\naddition of five number:%d",sum);
	
}
