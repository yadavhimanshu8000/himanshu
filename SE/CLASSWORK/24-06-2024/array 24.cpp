#include<stdio.h>

main()
{
	int a[2][2];
	int i,j;
	
	for(i=0;i<2;i++)		// raw
	{
		for(j=0;j<2;j++)		// column
		{
			printf("enter the number:");
			scanf("%d",&a[i][j]);
		}
	}
	
	
		for(i=0;i<2;i++)		//raw
	{
		for(j=0;j<2;j++)		// column
		{
			printf("\nthe number is: %d",a[i][j]);
		
		}
	}
}
