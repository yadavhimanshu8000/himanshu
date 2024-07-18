#include<stdio.h>
#include<string.h>

main()
{
	char a[4],b[4];
	

	printf("enter the string:");
	gets(a);
	
	printf("enter the string:");
	gets(b);
	
	strcat(a,b);
	{
		
	printf("%s",a);
	
	}
}
