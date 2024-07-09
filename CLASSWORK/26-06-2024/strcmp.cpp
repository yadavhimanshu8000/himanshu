#include<stdio.h>
#include<string.h>

main()
{
	char a[4],b[4];
	
	printf("enter the string1:");
	gets(a);
	
	printf("enter the string2:");
	gets(b);
	
	int c=strcmp(a,b);
	printf("%d",c);
	
}
