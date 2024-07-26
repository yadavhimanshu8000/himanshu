// Q(14) Accept 5 numbers from user and find those numbers factorials...

#include<stdio.h>

main()
{
	int a[5];						//data member...
	int fact=1;
	int i,j;
	
	for(i=0;i<5;i++)					// loopping
	{
		printf("%d .",i+1);
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<5;j++)						//using loopping...
	{
		fact=1;									// fact=1
	for(i=1;i<=a[j];i++)
	{
		fact=fact*i;
	}
	printf("factorial is: %d \n",fact);
}
}
	
	

