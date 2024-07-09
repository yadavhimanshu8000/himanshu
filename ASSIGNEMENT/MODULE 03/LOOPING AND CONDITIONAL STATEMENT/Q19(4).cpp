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
	
	for(i=1;i<=6;i++)			//row	
	{
		for(j=1;j<=6;j++)
		{
			printf("");		// space are not used in this program
		}
		for(k=1;k<=i;k++)			//column
		{
			printf(" *");
		}
		printf("\n");
		
	}
	
	
		for(i=1;i<=6;i++)			//row
	{
		for(j=1;j<=i;j++)		// space are not used in this program
		{
			printf("");
		}
		for(k=5;k>=i;k--)			//column
		{
			printf(" *");
		}
		printf("\n");
		
	}
}
