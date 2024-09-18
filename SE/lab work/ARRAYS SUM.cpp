#include<stdio.h>

main()

{
	int a[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
		
		for(i=0;i<5;i++)
		{
			printf(" \n ......Add two element:  ",a[i]);
			break;
		}
		printf(" \n %d sum the element... ",sum);
	
}
