// Q(11)WAP to accept 5 numbers from user and display in reverse order using for loop and array....

#include<stdio.h>

main()
{
	int a[5],i;					// data member...
	
	printf("enter the five element:\n");
	
	for(i=0;i<5;i++)								// using loop for five number...
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	
	
	printf("\n--------------------------------");
	printf("\nreverse number...");
	
	for(i=4;i>=0;i--)							// reverse the loop 
	{
	
		printf(" %d ,",a[i]);
	}
}



