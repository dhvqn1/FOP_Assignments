#include <stdio.h>

void sort(int a[], int n);

int main()
{
    int a[20], n, i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}

void sort(int a[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
