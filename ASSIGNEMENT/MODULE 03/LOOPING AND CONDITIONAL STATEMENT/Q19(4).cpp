//C program for followin pattern :
/* *
   **
   ***
   ****
   *****
   ******
   *****
   ****
   ***
   **
   *			*/


#include<stdio.h>

main()
{
	int i,j,k;
	
	printf("pattern:  \n\n");
	
	for(i=1;i<=6;i++)			// using loop for row....
	{
		for(k=1;k<=i;k++)				// using loop for column...
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
	
		for(i=1;i<=6;i++)			// using loop for row...
	{
		for(k=5;k>=i;k--)				// using loop for column...
		{
			printf(" *");
		}
		printf("\n");
		
	}
}
