/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>

main()
{
	int a[10],evencount=0,oddcount=0,sumeven=0,sumodd=0,i;
	
	printf("Enter 10 numbers : \n");
	
	for(i=0; i<10; i++)		//take inputs from user.
	{
		printf("%d. ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)		//find even numbers and their sum
		{
			evencount++;
			sumeven += a[i];
		}
		else				//find odd numbers and their sum
		{
			oddcount++;
			sumodd += a[i];
		}
	}
	
	
				//print all the values
	printf("\nNumber of even numbers : %d \n",evencount);
	printf("Sum Of all even numbers : %d \n\n",sumeven);
	printf("Number of odd numbers : %d \n",oddcount);
	printf("Sum Of all odd numbers : %d \n\n",sumodd);
}
