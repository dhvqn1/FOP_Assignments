#include <stdio.h>

int main()
{
    int N,i;
    float sum=0.0;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        sum = sum + (float)1/i;
    }

    printf("Sum of the series is: %.2f\n",sum);

    return 0;
}
