// Q(2)Write a program in C to separate individual characters from a string.....

#include<stdio.h>

main()
{
	char a[50];
	int i;
	
	printf("enter the character:");				//input.. a
	gets(a);
	
	printf("------------------------------\n");
	
	printf("print the character in separate..");
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		
			continue;
		
		else
			printf("\n %c",a[i]);				//print the separate input
		
	}
	
}
