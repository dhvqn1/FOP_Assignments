#include <stdio.h>

int main()
{
    int n,i;
    long int fact;

    scanf("%d",&n);

    fact = 1;
    i = 1;

    while(i<=n)
    {
        fact = fact * i;
        i++;
    }

    printf("The Factorial of %d is : %ld",n,fact);

    return 0;
}
