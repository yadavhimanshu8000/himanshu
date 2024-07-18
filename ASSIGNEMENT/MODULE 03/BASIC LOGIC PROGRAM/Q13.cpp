// Q(13) find character value from ascii....

#include<stdio.h>

main()
{
	int c;				// data member.....
	
	printf("enter number:");
	scanf("%d",&c);
	
	if(c>=33 && c<=127)				//using condition of ascii number....
	{
		printf("ascii: %d \nvalue of asicc:%c",c,(char)c);
	}
	else
	{
		printf("this is invalid ascii number");
		
	}
	
	

}
