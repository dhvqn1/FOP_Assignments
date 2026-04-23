#include <stdio.h>

float fun(float x);

int main()
{
    float a=1.0, b=2.0, x, prev, allerr;
    int itr=0, maxitr=10;

    scanf("%f",&allerr);

    x = (a+b)/2;

    do
    {
        prev = x;

        if(fun(a)*fun(x) < 0)
            b = x;
        else
            a = x;

        x = (a+b)/2;
        itr++;

        if((x - prev < allerr && x - prev > -allerr))
        {
            printf("Root = %1.4f\n", x);
            return 0;
        }

    } while(itr < maxitr);

    printf("Root = %1.4f\n", x);

    return 0;
}

float fun(float x)
{
    return (2*x*x*x - 3*x - 5);
}
