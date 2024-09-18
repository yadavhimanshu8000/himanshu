// Q(12) Program of Armstrong Number in C Using For Loop & While Loop.........

#include<stdio.h>

main()
{																						//153
	int num,lastdigit,original,result=0;
	
	printf("enter the three digit number:");
	scanf("%d",&num);
	
	original=num;			// original==num number
	
	while(original!=0)		// loop run until the number is 0..
	{
		lastdigit=original%10;			    //	lastdigit stored the remainder....
		
		result=result+lastdigit*lastdigit*lastdigit;		//	result= stored the multiply the lastdigit
		
		original/=10;					// divide
					
	}
	if(result==num)							// result == num then armstrong.....
	{
		printf(" \n number is armstrong %d",num);
	}
	else
	{
		printf("number not armstrong");
	}
	
}
