// Q(24) Series Program : 1 + 2 + 3 + 4 + 5 + ... + n 

#include<stdio.h>

main()

{
	int i,n,sum=0;							//data member..
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)							//using for loop
{
	sum=sum+i;
	
	if(i==n)											//if else applied condition
	
		printf("%d ",i);
		
	else
		printf("%d + ",i);	
}

	printf(" = %d ",sum);
	
	
}
