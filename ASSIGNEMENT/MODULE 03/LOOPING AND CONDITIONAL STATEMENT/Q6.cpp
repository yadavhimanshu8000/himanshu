// Q(6) WAP to print Fibonacci series up to given numbers.....

#include <stdio.h>

int main()
 {
    int t1 = 0, t2 = 1, nextTerm, n ,i;			//datamember...

    printf("Enter the number of terms: ");
    scanf("%d", &n);

  
    printf("Fibonacci Series: %d, %d, ", t1, t2);				// fibonacci...

    
    for ( i = 3; i <= n; i++) 							//using for loop...
	{
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    
}

