//Q(10) find area of rectangular prism....

#include<stdio.h>

main()
{
	int a=2,w,h,l;					// data member.....
	
	printf("enter width:");
	scanf("%d",&w);
	
	printf("enter height:");
	scanf("%d",&h);
	
	printf("enter length:");
	scanf("%d",&l);
	
	a=(w*l+h*l+h*w);				// formulass of area of rectangular prism....
	
	printf("area of rectangular prism:%d",a);
	
}
