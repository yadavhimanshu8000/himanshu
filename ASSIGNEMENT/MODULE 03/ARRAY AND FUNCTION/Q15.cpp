//Q(15) Store 5 numbers in array and sort it in ascending order........

#include<stdio.h>

main()
{
	int a[5],i,j,temp=0;				// data member...
	
	printf("enter the number..\n");
	
	for(i=0;i<5;i++)				// using loop ...
	{
		printf("%d.",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("----------------------------\n");
	
	printf("ascending order...\n");			// ascending order...
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
		}
		printf("%d ,",a[i]);
 
	}
		
}
