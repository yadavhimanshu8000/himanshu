#include<stdio.h>

	union hello{
		int a[2];
		int b[2];
		int i;
	}s1,s2,s3;






main()
{
	for(s1.i=0;s1.i<2;s1.i++)
	{
		printf("\nenter the number1:");
		scanf("%d",&s2.a[s1.i]);
	}
	
	printf("------------------------------------");
	
	for(s1.i=0;s1.i<2;s1.i++)
	{
		printf("\nenter the number2:");
		scanf("%d",&s3.b[s1.i]);
	}
	
	for(s1.i=0;s1.i<2;s1.i++)
	{
		printf("\naddition %d",s2.a[s1.i]+s3.b[s1.i]);
	}
}
