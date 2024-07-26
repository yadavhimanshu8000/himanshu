// Q(25) (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)...

#include<stdio.h>

main()
{
	int n,i,sum=0;							// data member.....
	
	printf("enter the number:");
	scanf("%d",&n);
	
		printf("\n\n Series : \n\n");
	
	for(i=1;i<=n;i++)											//for loop...
	
	{
		sum=sum+i*i;							// add i+i
		
		if(i==n)
		printf("(%d*%d)",i,i);
		
		else
		printf("(%d*%d) + ",i,i);
		
	}
	printf(" = %d",sum);													// print...
}
