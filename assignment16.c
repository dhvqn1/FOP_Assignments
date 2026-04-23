#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n], even[n], odd[n];
    int ec=0, oc=0;

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            even[ec++]=a[i];
        else
            odd[oc++]=a[i];
    }

    printf("\nEven numbers:\n");
    for(i=0;i<ec;i++)
        printf("%d ",even[i]);

    printf("\nOdd numbers:\n");
    for(i=0;i<oc;i++)
        printf("%d ",odd[i]);

    return 0;
}
