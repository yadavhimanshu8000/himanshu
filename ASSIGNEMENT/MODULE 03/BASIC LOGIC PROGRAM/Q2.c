// Q(02) write simple calculator .....

#include<stdio.h>

main()
{
	int a=50,b=45;						// data member....
	
	printf("addition: %d",a+b);
	printf("\nmulti: %d",a*b);
	printf("\nsub: %d",a-b);
	printf("\ndiv: %.2f" ,(float) a/b);			//for divide using float type
	printf("\nmodulo: %d",a%b); 
}
