// Q(16) Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:

#include<stdio.h>

main ()
{
	int temp=0;				// data member....
	
	printf("enter temperature:");
	scanf("%d",&temp);
	
	if(temp<0)						//condition.....if and multiple else if.....
	{
		printf("freezing whether...");
	}
	else if(temp<10)
	{
		printf("very cold whether...");
	}
	else if(temp<20)
	{
		printf("then the cold whether....");
	}
	else if(temp<30)
	{
		printf("then normal in temp...");
	}
	else if(temp<40)
	{
		printf("then its hot...");
	}
	else if(temp>=40)
	{
		printf("then its very hot...");
	}
}
