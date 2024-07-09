#include<stdio.h>

main()
{
	int i,j;
	int n=97;
	
	for(i=1;i<=26;i++)		//raw
	{
		for(j=1;j<=i;j++)		//column
		{
			printf("%c ",n);
		}
		printf("\n");
		n++;
	}
}
