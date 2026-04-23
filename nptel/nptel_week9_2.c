#include <stdio.h>

int linear_search(int a[], int n, int find);

int main()
{
    int array[100], n, search, i, position;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&array[i]);

    scanf("%d",&search);

    position = linear_search(array, n, search);

    if(position == -1)
        printf("%d is not present in the array.\n", search);
    else
        printf("%d is present at location %d.\n", search, position+1);

    return 0;
}

int linear_search(int a[], int n, int find)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(a[i] == find)
            return i;
    }

    return -1;
}
