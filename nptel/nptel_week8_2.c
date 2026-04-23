#include <stdio.h>

long power(int, int);

int main()
{
    int num, pow;
    long result;

    scanf("%d",&num);
    scanf("%d",&pow);

    result = power(num, pow);

    printf("%d^%d is %ld", num, pow, result);

    return 0;
}

long power(int num, int pow)
{
    if(pow == 0)
        return 1;

    return num * power(num, pow - 1);
}
