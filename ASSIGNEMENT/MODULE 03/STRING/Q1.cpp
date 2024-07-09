/*Q(01) C program to find the length of a string
 without using library functions.*/
 
 #include<stdio.h>
 
 main()
 {
 	char a[1000];
 	int i;
 	
 	printf("enter anything:");
 	gets(a);
 	
 	for(i=0;a[i]!='0';i++)
 	{
 		printf("%d",i);
	 }
 }
