#include<stdio.h>

main()
{
	int i=1,a,sum=0;							//data member...
	
	printf("enter the number:");
	scanf("%d",&a);
	
	while(i<=a)						//using while loop..
	
	{
			printf(" %d+ ",i);
		sum=sum+i;
		
		i++;									//increment...
	
		
		
	}
	printf(" \n \n sum of natural number... %d=>  %d",a,sum);
}
