#include<stdio.h>

add(int a ,int i, int k , int j)

{
		

	
	for(i=1;i<=a;i++)
	{
		for(k=a;k>i;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
		
}

main()
{
	
	int a,i,j,k;
	
	printf("enter the number:");
	scanf("%d",&a);

	add(a,i,j,k);
	
	
}

