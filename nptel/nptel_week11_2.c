#include <stdio.h>

float func(float x);

int main()
{
    int n = 10;
    float a, b, integral;
    float h, x, sum = 0;
    int i;

    scanf("%f",&a);
    scanf("%f",&b);

    h = (b - a) / n;

    for(i=1;i<n;i++)
    {
        x = a + i*h;
        sum += func(x);
    }

    integral = (h/2) * (func(a) + func(b) + 2*sum);

    printf("The integral is: %0.6f\n", integral);

    return 0;
}

float func(float x)
{
    return x*x;
}
