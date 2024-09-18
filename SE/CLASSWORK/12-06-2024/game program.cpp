#include<stdio.h>

main()
{
	int choice,original=20;
	
	printf("*********welcome to our game*********");
	
	while(1)
	{
		printf("\n*********guess the number between 1 to 50:**********");
		
		printf("\nenter the number between 1 to 50:\n");
		scanf("%d",&choice);
		
		if(choice<original)
		
		printf("\n less than original number:%d",choice);
			
		else if(choice>original && choice<=50)
		{
			printf("\n greater than original number:%d",choice);
		}
		
		else if (choice==original)
			
		{
			printf("\n you are won!!:",choice);
				break;	
		}
		else
		{
			printf("\n number is invalid:%d",choice);
			break;
		}
	
	}
}
