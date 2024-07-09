#include<stdio.h>

main()
{
	int a[2][2] ,b[2][2];
	int i,j;
	
	for(i=0;i<2;i++)			//raw
	{
		for(j=0;j<2;j++)			//column
		{
			printf("\nenter the number:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)			//raw
	{
		for(j=0;j<2;j++)			//column
		{
			printf("number is:%d    ",a[i][j]);
		
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)			//raw
	{
		for(j=0;j<2;j++)		//column
		{
			printf("\nenter the number:");
			scanf("%d",&b[i][j]);
		}
		
	}
			printf("\n");
		for(i=0;i<2;i++)		//raw
	{
		for(j=0;j<2;j++)		//column
		{
			printf("number is:%d    ",b[i][j]);
		
		}
			printf("\n");
	}
		printf("\n");
	for(i=0;i<2;i++)			//raw
	{
		for(j=0;j<2;j++)		// column
	
	printf("sum of number:%d    ",a[i][j]+b[i][j]);				//addtion of A and B
				printf("\n");
	}
				
	
}
