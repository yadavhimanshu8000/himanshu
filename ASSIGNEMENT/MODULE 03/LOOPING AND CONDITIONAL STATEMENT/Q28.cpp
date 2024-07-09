//   Q(28) 1 2 3 6 9 18 27 54...

#include<stdio.h>

main()

{
	int a,i,x=1,y=2;
	
	printf("enter the number:");
	scanf("%d",&a);
	
	
	printf("\n   *******series********");
	
	
	printf("\n %d \n %d",x,y);
	
	for(i=3;i<=a;i++)+
	
	
	if(i%2==1)
	{
		x=x*3;
		printf("\n %d",x);
	}
	else
	{
		y=y*3;
		printf("\n %d",y);
	}
	
	
}
