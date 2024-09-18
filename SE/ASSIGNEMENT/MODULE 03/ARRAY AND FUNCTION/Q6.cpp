
// Q(6) WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array


#include<stdio.h>

main()
{
	int a[2][2],b[2][2],i,j,k;
	
	
	printf("----------first input----------");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter the number1:");			// input1
			scanf("%d",&a[i][j]);
		}
		
		
	}
	
	printf("--------second input---------");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter the number2:");				//input2
			scanf("%d",&b[i][j]);
		}
	}
	
	
	printf("----------ADDITION-----------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);				//addition with matrix
		}
		printf("\n");
	}
	
	printf("-----------SUBSTRACTION-----------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("---------MULTIPLICTAION---------\n");
	int m[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m[i][j]=0;
			
			for(k=0;k<2;k++)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	
	
	


	
			
	

}
