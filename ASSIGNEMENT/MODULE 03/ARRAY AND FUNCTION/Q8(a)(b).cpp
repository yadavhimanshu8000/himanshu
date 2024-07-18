/*Q(8) [A] information -print and display empno, empname, address andage.

[B] Write a program of structure for five employee that provides the following information -print and display

empno, empname, address andage*/

#include<stdio.h>

struct employess {
	
	int empno;
	char empname[30];
	char address[30];
	int age;
}s[5];

main()
{
	int i;
	
	for(i=0;i<5;i++)
	
	{
		printf("\nenter the emp number:");
		scanf("%d",&s[i].empno);
		
		getchar();
		printf("\nenter name:");
		gets(s[i].empname);
		
		
		printf("\nenter the address:");
		gets(s[i].address);
		
		printf("\nenter the age:");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++)
	{
		printf("\nemployee: %d",i+1);
		printf(" \nemployess number: %d",s[i].empno);
		printf("\nemployess name: %s",s[i].empname);
		printf("\nenployess address: %s",s[i].address);
		printf("\nemployess age: %d\n",s[i].age);
	}
	
}
