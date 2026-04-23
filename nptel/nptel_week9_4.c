#include <stdio.h>

int main()
{
    int array[100], n, i, temp, end;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    end = n - 1;

    for(i=0;i<n/2;i++)
    {
        temp = array[i];
        array[i] = array[end];
        array[end] = temp;
        end--;
    }

    printf("Reversed array elements are:\n");

    for(i=0;i<n;i++)
        printf("%d\n",array[i]);

    return 0;
}
