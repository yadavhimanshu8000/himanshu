//C program for followin pattern :
/*1
  10
  101
  1010
  10101 */	

#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)			// row
	{
		for(j=1;j<=5;j++)			// for  space but not used in this program..
		{
			printf("");
		}
		for(k=1;k<=i;k++)		//column
		{
			if(k%2==1)			// column modulas by 2==1 then print 1 in column.....
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
