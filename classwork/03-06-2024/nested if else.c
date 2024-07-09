#include<stdio.h>

main ()
{
	int a,b,c;
	
	printf("enter A:");
	scanf("%d",&a);
	
	printf("enter B:");
	scanf("%d",&b);
	
	printf("enter C:");
	scanf("%d",&c);
	
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d a is greater",a);
		}
		else
		{
			printf("%d c is greater",c);
		}
   }
		else
		{
			if(b>c)
			{
				printf("%d b is greater",b);
			}
			else
			{
				printf("%d c is greater",c);
			}
			
		}
			
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

