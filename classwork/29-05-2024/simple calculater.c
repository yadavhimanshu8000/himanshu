#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter a value:");
	scanf("%d",&a);
	
	printf("enter b value:");
	scanf("%d",&b);
	
	printf("\nadd:%d",a+b);
	printf("\nsub:%d",a-b);
	printf("\nmulti:%d",a*b);
	printf("\ndiv:%.2f",(float)a/b);
		
}
