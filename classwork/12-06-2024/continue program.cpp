#include<stdio.h>

main()
{
	int i,j;
	
	printf("enter the number:");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	{
		if(i==5)
		{
				continue;
		}
	
		printf("%d",i);
	}
}
