#include <stdio.h>

int main()
{
    int array[100], n, search, i;
    int first, last, middle;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    scanf("%d",&search);

    first = 0;
    last = n - 1;

    while(first <= last)
    {
        middle = (first + last) / 2;

        if(array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle+1);
            return 0;
        }
        else if(array[middle] < search)
            first = middle + 1;
        else
            last = middle - 1;
    }

    printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
