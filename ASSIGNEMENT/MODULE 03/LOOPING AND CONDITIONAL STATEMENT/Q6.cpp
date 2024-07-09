// Q(6) WAP to print Fibonacci series up to given numbers.....

#include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, nextTerm, n ,i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

  
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    
    for ( i = 3; i <= n; i++) 					//3 n=7
	{
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    
}

