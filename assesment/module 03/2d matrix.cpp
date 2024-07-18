#include"stdio.h"


	multi()
	{
		
	int a[2][2],b[2][2],c[2][2],i,j,k;
	
	printf("\n-----------multiple 2x2...---------------");
	
	printf("\n first matrix");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter the number:");
			scanf("%d",&a[i][j]);
			
		}
	}
	
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
		
		printf("\n---------------------second matrix----------------------");
	
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("\nenter the number");
				scanf("%d",&b[i][j]);
			}
		}
		
			
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		
		printf("multiple of two matrix\n");
	
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				c[i][j]=0;
				for(k=0;k<2;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
			
			
		}
	
					
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	
	


}






main()
{

	
	multi();
	
}
