//C program for followin pattern :
/* 1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15	*/


#include<stdio.h>

main()
{
	int i,j,h,k=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("");
		}
		for(h=1;h<=i;h++)
		{
			printf("%d ", k);
			k++;
		}
		printf("\n");
	}
}
