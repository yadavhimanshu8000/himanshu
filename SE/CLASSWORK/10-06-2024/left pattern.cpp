#include<stdio.h>

main()
{
	int i,j,k;
	
	printf("left pattern:\n");
	
	for(i=1;i<=8;i++)		//raw
	{
		for(j=1;j<=8-i;j++)
		{
			printf(" ");		//space
		}
		for(k=1;k<=i;k++)		//column
		{
			printf("*");
		}
		printf("\n");
	}
}
