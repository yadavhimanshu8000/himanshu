#include<stdio.h>

main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\nenter the element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n \n %d",a[i]);
	}
}
