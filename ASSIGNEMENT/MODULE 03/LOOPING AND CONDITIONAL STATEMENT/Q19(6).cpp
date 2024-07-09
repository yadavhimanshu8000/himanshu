//C program for followin pattern :
/* A
   AB
   ABC
   ABCD
   ABCDE   */

#include<stdio.h>

main()
{
	int i,j,q;
	
	for(i=1;i<=5;i++)		//row
	{
		for(j=1;j<=5;j++)
		{
			printf("");
		}
		for(q=1;q<=i;q++)		// column
		{
		  printf("%c ",q+64);
		}
		printf("\n");
	}
}
