/*Q(20) Accept monthly salary from the user and 
 deduct 10% insurance premium, 10% loan installment 
 find out of remaining salary. */

#include<stdio.h>

main()
{
	float s,d;				//s=amount , d=deduction..
							
	printf("enter the monthly salary:");	//input user...
	scanf("%f",&s);
	
	d=(s*10)/100;	    	//10% of salary	
	
	printf(" \nAfter Deduction Remaining Salary = Rs.%.2f \n",s-d-d);
}											// deduction : 10% for insurance,10% for loan
