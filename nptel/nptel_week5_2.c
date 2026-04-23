#include <stdio.h>

int main()
{
    int N, temp, count=0;

    scanf("%d",&N);

    temp = N;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    printf("The number %d contains %d digits.", N, count);

    return 0;
}
