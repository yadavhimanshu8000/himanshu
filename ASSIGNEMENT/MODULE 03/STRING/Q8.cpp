//Q(8) Write a program in C to count the total number of vowels or consonants in a string.....

#include<stdio.h>

main()
{
	char a[30];
	int i,v=0,c=0;
	
	printf("enter the character:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'|| a[i]=='e'|| a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I' || a[i]=='O' || a[i]=='U')
		{
			v++;
		}
			
	
	else
		{
			c++;
		}
	
	}
	printf("\ntotal number of vowels:%d",v);
	printf("\ntotal number of consonants:%d",c);
	
	
}
