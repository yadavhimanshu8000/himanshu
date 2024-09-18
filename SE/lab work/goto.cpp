#include<stdio.h>

main()
{
	int i=1;
	hmm:
		printf("%d",i);
		++i;
		if(i<=10)
		goto hmm;
}
