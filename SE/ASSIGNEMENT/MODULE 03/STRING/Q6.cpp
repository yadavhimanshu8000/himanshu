/*Q(6)Write a program in C to count the total number of alphabets,
 
			digits and special characters in a string*/
			
#include<stdio.h>

main()
{
	char a[30];
	int i,fl=0,sl=0,tl=0;
	
	printf("enter the string:");				//input...
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&& a[i]<='Z' || a[i]>='a' && a[i]<='z')			// first condition for alphabets...
		{
			fl++;
		}
		else if (a[i]>='0' && a[i]<='9')		// second condition for digits...
		{
				sl++;
		}
		
		else if(a[i]==' ')
		{
			continue;
		}
		
		else							// third condition for special character....
		
		{
			tl++;	
		}
		
					
	}
	
					// print all the condition.........
	printf("\ntotal number of alphabets...%d",fl);
	printf("\ntotal number of digit...%d",sl);
	printf("\ntotal number of special character..%d",tl);
}
