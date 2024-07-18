// Q(12)WAP to accept 5 students name and store it in array

#include<stdio.h>

main()
{
	char a[5][30];
	int i;
	
	printf("enter the five name...\n");							//enter five name
	
	for(i=0;i<5;i++)										//using loop
	{
		printf("%d.",i+1);
		gets(a[i]);
	}
	
	printf("-------------------------------------\n");				//using line style....
	
	printf("\nprint name....\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d.",i+1);
		printf("%s\n",a[i]);
	}
	
	
	
}
