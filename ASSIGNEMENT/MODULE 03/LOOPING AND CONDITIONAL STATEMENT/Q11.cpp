// Accept 5 names from user at run time...

#include<stdio.h>

main()
{
	char a[5][30];
	int i;
	
	for(i=0;i<5;i++)		//user inputs
	{
		printf("%d.",i+1);
		scanf("%s",&a[i]);
	}
	
	for(i=0;i<5;i++)	//display all the names
	{
		printf("\ndisplay: %s",a[i]);
	}
}
