#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *element, max;

    scanf("%d",&n);

    element = (float*)calloc(n, sizeof(float));

    if(element == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    for(i=0;i<n;i++)
        scanf("%f", element + i);

    max = element[0];

    for(i=1;i<n;i++)
    {
        if(max < element[i])
            max = element[i];
    }

    printf("Largest element = %.2f\n", max);

    free(element);

    return 0;
}
