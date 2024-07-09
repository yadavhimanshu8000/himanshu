// Q(05) WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.....

#include<stdio.h>

main()
{
	int a[2],b[2],choice1,choice2,m,n,i,j ,temp;
	
	
	printf("enter the number:\n");
	
		for(i=0;i<2;i++)
	{
		printf(" :%d ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("enter the number:\n");
	
			for(i=0;i<2;i++)
	{
		printf(" :%d ",i+1);
		scanf("%d",&b[i]);
	}
	
			printf("-----------------------------------------");
			printf("\nselect 1  to ascending order :");
			printf("\nselect 2  to descending order:");
			printf("\n------------------------------------------");
			
			
	
	      	printf("\nEnter your choice for 1st array : ");
			scanf("%d",&choice1);
			
			printf("\nEnter your choice for 2st array : ");
			scanf("%d",&choice2);
		
			printf("\n-------------------------------\n");
			
			if(choice1==1)
			{
				printf("for ascending order:");
				
				for(i=0;i<2;i++)
				{
					for(j=i+1;j<2;j++)
					{
						if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
						printf("  %d, ",a[i]);
				}
			
			}
			else if(choice1==2)
			{
				printf("for desending order..");
				
				for(i=0;i<2;i++)
				{
					for(j=i+1;j<2;j++)
					
					{
						if(b[i]<b[j])
						{
							temp=b[j];
							b[j]=b[i];
							b[i]=temp;
						}
					}
						printf("  %d, ",b[i]);
				}
			
			}
			if(choice2==1)
			{
				printf("for ascending order:");
				
				for(i=0;i<2;i++)
				{
					for(j=i+1;j<2;j++)
					{
						if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
						printf("  %d, ",a[i]);
				}
			
			}
			
				else if(choice2==2)
			{
				printf("for desending order..");
			
				
				for(i=0;i<2;i++)
				{
					for(j=i+1;j<2;j++)
					
					{
						if(b[i]<b[j])
						{
							temp=b[j];
							b[j]=b[i];
							b[i]=temp;
						}
					}
						printf("  %d, ",b[i]);
				}
			
			}
			else
			{
				printf("invalid choice...");
			}
	

	
	
	
}
