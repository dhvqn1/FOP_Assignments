#include <stdio.h>

int main()
{
    int array[100], n, search, count = 0, i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    scanf("%d",&search);

    for(i=0;i<n;i++)
    {
        if(array[i] == search)
        {
            printf("%d is present at location %d.\n", search, i+1);
            count++;
        }
    }

    if(count == 0)
        printf("%d is not present in the array.\n", search);
    else
        printf("%d is present %d times in the array.\n", search, count);

    return 0;
}
