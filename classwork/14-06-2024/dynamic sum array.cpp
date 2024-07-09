#include<stdio.h>

main()
{
	int a[3];
	int i,sum=0;
	
	for(i=0;i<3;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("number is %d \n",a[i]);
		sum=sum+a[i];
	}
	printf(" sum \n:%d",sum);
}
