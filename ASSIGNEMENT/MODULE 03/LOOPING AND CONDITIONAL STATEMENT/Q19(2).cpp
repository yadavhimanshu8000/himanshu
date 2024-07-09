//C program for followin pattern :
/*A
  BC
  DEF
  GHIJ
  KLMNO */

#include<stdio.h>

main()

{
	int i,j,k,n=65;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c",n);
			n++;
		}
		printf("\n");
	}
}
