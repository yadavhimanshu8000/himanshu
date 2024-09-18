#include<stdio.h>

main()
{
	int i=1,j,k;
	
	while(i<=5)				//raw
	{
		j=1;
		while(j<=5-i)
		{
			printf(" ");		//space
			j++;
		}
		k=1;
		while(k<=i)				// using while loop column.....
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;
			
	}


}
