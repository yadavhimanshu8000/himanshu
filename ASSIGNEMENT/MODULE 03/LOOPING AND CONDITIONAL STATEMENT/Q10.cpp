//  Q(10) 10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5).....

#include<stdio.h>

main()

{
	int num,sum=0;
	
	printf("enter the num:");
	scanf("%d",&num);
	
	sum=num%10;			// capture the last digits.....
	while(num>9)			// run the loop until num greater 9....
	{
		num=num/10;			// num divide 10 
	}
	sum=sum+num;				// sum=num
	printf("last and first digit .....add...%d",sum);
}
