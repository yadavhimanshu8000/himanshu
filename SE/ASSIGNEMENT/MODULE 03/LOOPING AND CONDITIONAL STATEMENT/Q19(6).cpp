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
	
	for(i=1;i<=5;i++)		//loop using for row
	{
		for(q=1;q<=i;q++)		//loop using for column
		{
		  printf("%c ",q+64);
		}
		printf("\n");
	}
}
