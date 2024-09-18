//Q(14) find ascii value of given number...

#include<stdio.h>

main()
{
	char ascii;					//using char data member....
	
	printf("enter character:");
	scanf("%c",&ascii);
	
	if(ascii>=33 && ascii<=127)			// condition of ascii number....
	{
		
	printf("ascii:%c\nvalue:%d ",ascii,(int)ascii);			// for value using (int) data....
	
	}
	else
	{
		printf("this is invalid ");
	}
	
}
