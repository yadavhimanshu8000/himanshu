//C program for followin pattern :
/*A
  BC
  DEF
  GHIJ
  KLMNO */

#include<stdio.h>

main()

{
	int i,k,n=65;			//data member....
	
	for(i=1;i<=5;i++)				//loop using for row...
	{
		for(k=1;k<=i;k++)			// for using column...
		{
			printf("%c",n);
			n++;					// n increment....
		}
		printf("\n");
	}
}
