#include<stdio.h>

main()
{
	int choice,original=25;
	
	printf("**********welcome to game**********");
	
	printf("\n********enter the number between 1 to 50:");
	
	while(1)
	
	
	{
	
	printf("\nenter the number between 1 to 50:");
	scanf("%d",&choice);
	
		if(choice<original)
		{
			printf("\n less than original value:%d",choice);		
		}
		else if(choice>original && choice<=50)
		{
			printf("\n greater than original value:%d",choice);	
		}
		else if(choice==original)
		{
			printf("\n you won!!");
			break;
		}
		else
		{
			printf("\n invalid number:%d",choice);
		
		}
	}
}
