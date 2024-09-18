/*Q(11)Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include<stdio.h>

main()
{
	char a[30];
	int i;
	
	printf("enter string:");					// enter a string
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')				//Convert upper case to lower case
		a[i]=a[i]+32;
		
		else if (a[i]>='a' && a[i]<='z')	 	//Convert lower case to upper case
		a[i]=a[i]-32;
		
		else									// other thing are same....
		a[i]=a[i];
	}
	
	printf("\n uppercase into lowercase and lowercase into uppercase %s",a);
}
