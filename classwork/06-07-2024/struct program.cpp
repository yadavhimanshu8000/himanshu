#include<stdio.h>

 struct mystructure{
 	int a;
 	int b;
 }s1;






main()
{
	printf("enter the number1:");
	scanf("%d",&s1.a);
	
	printf("\nenter the number2:");
	scanf("%d",&s1.b);
	
	printf("\n%d",s1.a);
	printf("\n%d",s1.b);
}
