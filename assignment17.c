#include <stdio.h>

int main()
{
    int n,i;
    float x,sum=0,term;

    scanf("%f",&x);
    scanf("%d",&n);

    float num=x,den=1;
    int sign=1;

    for(i=1;i<=n;i++)
    {
        term = sign*(num/den);
        sum += term;

        num = num*x*x;
        den = den*(2*i)*(2*i+1);
        sign = -sign;
    }

    printf("%f",sum);

    return 0;
}
