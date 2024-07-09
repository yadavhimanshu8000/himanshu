#include<stdio.h>
#include<string.h>

main()
{
	char a[4],b[4];
	
	printf("enter the string:");
	gets(a);
	
	strcpy(b,a);
	
	    printf("\n%s",a);
		printf("\n%s",b);
}
