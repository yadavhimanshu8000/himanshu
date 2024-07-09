#include<stdio.h>

main()

{
int a , b  ,  c;

printf("Enter a Number :- ");
scanf("%d" , &a);
printf("Enter b Number :- ");
scanf("%d" , &b);
printf("Enter c Number :- ");
scanf("%d" , &c);
 // a =23; b=34 c= 56
if(a>b || a>c){ 
	printf("%d Greatest value  a", a);
	
}
else if (b>a || b>c ){
	  printf("%d Greatest value b  " ,b );
}
else{
	 printf("%d Greatest value c  ",c);
}
}
