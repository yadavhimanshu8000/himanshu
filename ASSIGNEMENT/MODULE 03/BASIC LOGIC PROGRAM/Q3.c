//Q (03) find area and circuference of circle.....

#include<stdio.h>

main()
{
	float radius,area,circumference;
	
	printf("enter the radius:");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	circumference=2*3.14*radius;
	
	printf("\n area of the circle %.2f",(float)area);
	printf("\n circumference of the circle :%.2f",(float)circumference);
}
