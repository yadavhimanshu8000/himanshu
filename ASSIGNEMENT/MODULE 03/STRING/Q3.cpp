//Q(03) Write a program in C to print individual characters of a string in reverse order.....

#include<stdio.h>

main()
{
	char a[30];
	int i,j=0;
	
	printf("enter the chacacter:");
	gets(a);
																			
	for(i=0;a[i]!='\0';i++)
	j++;								//stored the input in j....
	
	
	printf("\nprintf the individual char in reverse order....\n");
	
	for(i=j;i>=0;i--)					//reverse te input....
	{
		if(a[i]==' ')
		
		continue;
		
		else
		
		printf("\n%c",a[i]);
	}	
		
}
