/*#include<stdio.h>

main()
{
	FILE*hima;
	
	hima=(fopen("hiii1.txt","w"));
	fprintf(hima,"hiiii world");
	fclose(hima);
}*/






/*#include<stdio.h>

main()
{
	FILE*hima;
	
	hima=(fopen("hiii1.txt","a"));
	fprintf(hima,"\nkutta");
	fclose(hima);
}*/




#include<stdio.h>

main()
{
	FILE*hima;
	
	hima=(fopen("hiii1.txt","r"));
	
	char a[100];
	
	fgets(a,100,hima);
	
	printf("%s",a);
	
	fclose(hima);
}






