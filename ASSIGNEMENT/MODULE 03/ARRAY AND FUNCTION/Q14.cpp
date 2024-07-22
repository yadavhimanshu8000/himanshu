// Q(14)Perform 2D matrix array



#include<stdio.h>

main()
{
	int a[2][2],i,j;					//	data member
	
	printf("enter the number..\n");
	
	for(i=0;i<2;i++)								// using loop for input.
	{
		
		for(j=0;j<2;j++)
		{
		printf("%d.",j+1);
			
		scanf("%d",&a[i][j]);
		}
	}
	
	printf("-------------------------------\n");
	
	printf("matrix are.....\n");				// print in matrix....
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);				// \t for matrix
		}
		printf("\n");
	}
	
}
