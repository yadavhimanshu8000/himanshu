#include<stdio.h>

main()
{
	int i,j,s;
	
	printf("enter pattern number:");
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)		// row
	
	{
		for(s=1;s<=j;s++)					//column
			
		{
			printf("*");			
		}
		printf("\n");
	}
}
