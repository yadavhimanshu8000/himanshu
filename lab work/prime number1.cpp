#include<stdio.h>

main()
{
	int n,i,c=0;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
{
		
	if(n%i==0)				// 7%1==0 // 7%2==0 ........continue last 7.
	
	c++;
}

	if(c==2)
{

	printf("\nnumber is prime....",i);
}
else
{
	printf("number is not prime");
}


}
