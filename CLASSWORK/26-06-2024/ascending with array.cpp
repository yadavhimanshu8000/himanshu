#include<stdio.h>

main()
{
	int a[4];
	int i,j;
	
	printf("enter four element:");
	
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
     
	printf("ascending number:");
	for(i=0;i<4;i++)
	
	{
		for(j=i+1;j<4;j++)
		{
			int temp;
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			printf("%d",a[i]);
	}
		
}
