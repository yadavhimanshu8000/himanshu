//Q(14) find ascii value of given number...

#include<stdio.h>

main()
{
	char ascii;
	
	printf("enter character:");
	scanf("%c",&ascii);
	
	if(ascii>=33 && ascii<=127)
	{
		
	printf("ascii:%c\nvalue:%d ",ascii,(int)ascii);
	
	}
	else
	{
		printf("this is invalid ");
	}
	
}
