#include <stdio.h>

int main()
{
    float t[5] = {10,15,18,22,30};
    float v[5] = {22,26,35,48,68};
    float a, b, c, k = 0.0;
    int i, j;

    scanf("%f",&a);

    for(i=0;i<5;i++)
    {
        b = 1.0;
        c = 1.0;

        for(j=0;j<5;j++)
        {
            if(i != j)
            {
                b *= (a - t[j]);
                c *= (t[i] - t[j]);
            }
        }

        k += (b/c) * v[i];
    }

    printf("The respective value of the variable v is: %.2f", k);

    return 0;
}
