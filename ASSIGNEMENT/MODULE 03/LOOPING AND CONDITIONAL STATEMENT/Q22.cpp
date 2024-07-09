// Q(22) Accept 3 numbers from user using while loop and check each numbers palindrome....


#include<stdio.h>

main()
{
	int a,rem,sum=0,c ,z=0;
	
	printf("enter the three number :");
	scanf("%d",&a);
	c=a;
	
	while(a>0)	
	{
		
		rem=a%10;								
		sum=rem+(sum*10);								
		a=a/10;	
					
	}
	if(c==sum)
	{
		printf("palindrome number....");
	}
	else
	{
		printf("not a palindrome...");
	}

}
