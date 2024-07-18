// Q(11)WAP to accept 5 numbers from user and display in reverse order using for loop and array....

#include<stdio.h>

main()
{
	int a[5],i;
	
	printf("enter the five element:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	
	
	
/*	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	*/
	printf("\n--------------------------------");
	printf("\nreverse number...");
	
	for(i=4;i>=0;i--)
	{
	
		printf(" %d ,",a[i]);
	}
}



