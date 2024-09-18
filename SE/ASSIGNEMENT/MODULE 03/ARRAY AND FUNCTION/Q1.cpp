// Q(01) Write a program to find out the max number from given array using function...

#include<stdio.h>

max(int a[5])					//input array 5
{
	int i,max=0;
	
	for(i=0;i<5;i++)				//loop o to 4
	
		if(a[i]>max)							// 5>0,6>0
		{
			max=a[i];					//stored in max
		}
		return max;							// with return....
}


main()
{
	int a[5],j;
	
	printf("\n****enter the five number****\n");				//print five number...
	
	for(j=0;j<5;j++)
	{
	
		printf("\n \n %d.",j+1);							
		scanf("%d",&a[j]);
	}	
	printf("\n maximum number = %d",max(a));					//calling max
}
