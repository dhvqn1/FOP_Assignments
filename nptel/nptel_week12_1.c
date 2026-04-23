#include <stdio.h>

void findFact(int, long int *);

int main()
{
    int num1;
    long int fact;

    scanf("%d",&num1);

    findFact(num1, &fact);

    printf("The Factorial of %d is : %ld\n", num1, fact);

    return 0;
}

void findFact(int n, long int *f)
{
    int i;

    *f = 1;

    for(i=1;i<=n;i++)
        *f = (*f) * i;
}
