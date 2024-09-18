// Q(9) WAP to show difference between Structure and Union.

/*#include<stdio.h>

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
	
	printf("\n%d ",s1.a+s1.b);

}*/


#include<stdio.h>

union hello{					//using union.....
	int a[2];
	int b[2],i;
	
	
}s1,s2,s3;



main()
{
	for(s1.i=1;s1.i<2;s1.i++)
	{
	printf("\nenter the number1:");			// input....
	scanf("%d",&s2.a[s1.i]);
	}
	
	printf("--------------------------------\n");
	
	for(s1.i=1;s1.i<2;s1.i++)
	{
		printf("\nenter the number2:");		// input2
		scanf("%d",&s3.b[s1.i]);
	}
	
	printf("-----------------------------------\n");
	
	for(s1.i=1;s1.i<2;s1.i++)
	
	{
		printf("%d",s2.a[s1.i]+s3.b[s1.i]);			// addition...
	}
	
}





