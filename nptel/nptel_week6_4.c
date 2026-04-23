#include <stdio.h>

int main()
{
    int array[50], size, i, j, k;

    scanf("%d",&size);

    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<size-1;k++)
                    array[k]=array[k+1];

                size--;
            }
            else
                j++;
        }
    }

    for(i=0;i<size;i++)
        printf("%d\n",array[i]);

    return 0;
}
