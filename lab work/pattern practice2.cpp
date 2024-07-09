#include<stdio.h>

main()
{
	int i,j,a;
														
	for(i=1;i<=5;i++)		// raw
	{
		for(j=1;j<=5-i;j++)
	{
			
		printf(" ");			//space
	}
	
	for(a=1;a<=i;a++)			// column
	{
		printf(" *");
	}
	printf("\n");
	}
	
	
	
	for(i=1;i<=4;i++)		// raw
	{
		for(j=1;j<=i;j++)
	{
			
		printf(" ");			//space
	}
	
	for(a=4;a>=i;a--)			// column
	{
		printf(" *");
	}
	printf(" \n");
	}
	
}


