#include<stdio.h>

	struct hello{
		int a[2];
		int b[2];
		int i;
		
		
	}s1;





main()
{    
	
		for(s1.i=0;s1.i<2;s1.i++)
		{
		printf("\nenter element A:");
		scanf("%d",&s1.a[s1.i]);
		}
		
		
		printf("---------------------------------");
	
		for(s1.i=0;s1.i<2;s1.i++)
		{
			printf("\nenter element B:");
			scanf("%d",&s1.b[s1.i]);
		
		}
		
	
		for(s1.i=0;s1.i<2;s1.i++)
		{
			
		printf("\naddtion %d",s1.a[s1.i]+s1.b[s1.i]);
		
		}
		
			
}
