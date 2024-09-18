// Q(22) Accept 3 numbers from user using while loop and check each numbers palindrome....


#include<stdio.h>

main()
{
	int a,rem,sum=0,c;								//data member...
	
	printf("enter the three number :");
	scanf("%d",&a);
	c=a;
	
	while(a>0)									// using while loop 
	{
		
		rem=a%10;					// stored remainder....					
		sum=rem+(sum*10);								
		a=a/10;							// divide..
					
	}
	if(c==sum)							//using condition if else....
	{
		printf("\npalindrome number....");
	}
	else
	{
		printf("\nnot a palindrome...");
	}

}
