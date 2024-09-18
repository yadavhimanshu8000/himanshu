#include<stdio.h>

factorial(int n)
{
	int i,fact=1;
for(i=1;i<=n;i++)

fact=fact*i;

printf("\n factorial= %d",fact);

}
prime(int x)
{
	int i,count=0;
	for(i=1;i<=x;i++)
	
	   if(x%i==0)
	   count++;
	   
	   if(count==2)
	   {
	   	printf("\nnumber is prime: %d",x);
	   }
	   else
	   {
	   	printf("\nnumber is not prime: %d",x);
	   }
}
rightangle(int y)
{
	int i,j;
	for(i=1;i<=y;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

main()
{
	int a,b;
	while(a!=4)
	{
		printf("\n******** select any one********\n");
		printf("\n1. find the factorial number***\n");
		printf("\n2. find the prime number****\n");
		printf("\n3. find the rightangle***\n");
		printf("\n4. exit****\n");
		
	printf("\nenter the number:");
	scanf("%d",&a);
	
		
		switch(a)
		{
			case 1:
				printf("\nenter the number:");
				scanf("%d",&b);
				factorial(b);
				break;
				
			case 2:
				printf("\nenter the number:");
				scanf("%d",&b);
				prime(b);
				break;
				
			case 3:
				printf("\nenter the number:");
				scanf("%d",&b);
				rightangle(b);
				break;
				
			case 4:
				break;
				
			default:
				{
					printf("\nnumber is invalid:");
					printf("\n**enter the correct choice:**");
				}
		}
		
		
    }


}
