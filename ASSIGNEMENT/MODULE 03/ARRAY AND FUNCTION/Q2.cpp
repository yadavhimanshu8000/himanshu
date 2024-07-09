// Q(02) WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven).....

#include<stdio.h>

main()

{
	int choice,a,b;
	
	while(choice!=5)
	{
	
	
	printf("\n****enter what you want*****\n");
	printf("\n 1. ADDTION\n");
	printf("\n 2. subtraction\n");
	printf("\n 3. multiplication\n");
	printf("\n 4. division\n");
	printf("\n 5. exit\n");
	
	printf("\nenter your choice:\n");
	scanf("%d",&choice);
		
		if(choice>=1 && choice<5)
		{					
						//take two numbers from user
			printf("\nEnter two numbers : \n No. 1 : ");
			scanf("%d",&a);
			printf(" \nNo. 2 : ");
			scanf("%d",&b);
		}

	
	
	switch(choice)
	{
		case 1: printf("\nADDTION OF TWO NUMBER.....%d+%d=%d\n",a,b,a+b);
				printf("\n \n------------------------\n \n");
		break;
		
		case 2: printf("\nSUBTRACTION OF TWO NUMBER.....%d-%d=%d\n",a,b,a-b);
				printf("\n \n-------------------------\n \n");
		break;
		
		case 3:
				printf("\nMULTIPLICATION OF TWO NUMBER.....%d*%d=%d\n",a,b,a*b);
				printf("\n \n-------------------------\n \n");
		break;
		
		case 4:
				printf("\nDIVISION OF TWO NUMBER.....%d/%d=%.2f\n",a,b,(float)a/b);
		break;
		
		case 5:
				printf("\n thank you .......");
		break;
		
		default:
			printf("\n \n INVALID CHOICE..\n");
			printf("--------------------------\n");
	}
		
	}
	
}
