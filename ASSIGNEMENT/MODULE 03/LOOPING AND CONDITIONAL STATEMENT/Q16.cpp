#include<stdio.h>

main()
{
	int i=1,a,sum=0;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	while(i<=a)
	
	{
			printf(" %d+ ",i);
		sum=sum+i;
		
		i++;
	
		
		
	}
	printf(" \n \n sum of natural number... %d=>  %d",a,sum);
}
