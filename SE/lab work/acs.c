/*
#include<stdio.h>

main()
{
	int i,j,a[4],temp;
	
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
			printf("asscending :%d",a[i]);
	}

	
	
}


#include<stdio.h>

main()
{
	int a,c=0,i;
	
	printf("enter the no:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("p");
	}
	else
	{
		printf("n");
	}
}



#include<stdio.h>

main()
{
	int i,a,fact=1;
	
	printf("enter no:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}



#include<stdio.h>

main()
{
	int i,j,n=65;
	
	for(i=1;i<5;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%c",n);
			n++;
		}
		printf("\n");
	
	}
	
}


#include<stdio.h>

main()
{
	int tl=0,t2=1,next,a,i;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	
		printf("%d , %d ,",tl , t2);
	for(i=3;i<=a;i++)
	{
		next=tl+t2;
		printf("%d ,",next);
		tl=t2;
		t2=next;
	}
	
}

*/

#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}



