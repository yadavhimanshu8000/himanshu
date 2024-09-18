//C program for followin pattern :
/* 1
   2  3
   4  5  6
   7  8  9  10
   11 12 13 14 15	*/


#include<stdio.h>

main()
{
	int i,j,h,k=1;								// data member....
	
	for(i=1;i<=5;i++)				// using loop for row....
	{
		for(h=1;h<=i;h++)					// using loop for column...
		{
			printf("%d ", k);
			k++;								// k increment.....
		}
		printf("\n");
	}
}
