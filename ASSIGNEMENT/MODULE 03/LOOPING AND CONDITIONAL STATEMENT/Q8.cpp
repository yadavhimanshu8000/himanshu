// Q(08)Write a program to find out the max from given number (E.g., No: -1562 Max number is 6......

#include<stdio.h>

main ()

{
	int num,maxdigit=0,digit,originalnum;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	originalnum=num;
	
	while(num!=0)					// run loop until num is zero.....
	{
		digit=num%10;				//   last digit capture......
		if(digit>maxdigit)			//if digit is greater than maxdigit update the maxdigit.....
		{
			maxdigit=digit;	
		 }
		 num=num/10; 		//   delete last digit	.......
	}
	printf("the greater numer %d is %d",originalnum,maxdigit);		//result.....
	
}
