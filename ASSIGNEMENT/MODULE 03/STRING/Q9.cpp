//Q(9) Write a program in C to find the maximum number of characters in a string....

#include<stdio.h>

main()
{
	char a[30],b[30];
	int i,j;
	
	
	printf("enter the character1:");
	gets(a);
	
	printf("\nenter the character2:");
	gets(b);
	

	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>b[i])
		
		j=1;
	
	else
	
		j=2;
	}
	
	if(j==1)
	
	{
		printf("\nCHARACTER A IS MAXIMUM NUMBER.... ");
	}
	
	else
	{
		printf("\nCHARACTER B IS MAXIMUM NUMBER...");
	}
	
	
}
