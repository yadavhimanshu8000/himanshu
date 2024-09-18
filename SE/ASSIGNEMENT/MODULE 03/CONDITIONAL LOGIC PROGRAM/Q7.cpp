// Q(07) Accept marks from user and check pass or fail.....


#include<stdio.h>

main()
{
	int marks,pass=34;				//data member....
	
	printf("enter a marks:");
	scanf("%d",&marks);
	
	if(marks>=pass)					//condition...
	{
		printf("student is pass ....");             
	}
	else
	{
		printf("student is fail....");
	}
}
