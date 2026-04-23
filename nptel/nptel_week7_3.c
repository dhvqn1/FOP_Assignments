#include <stdio.h>

int main()
{
    int matrix[20][20];
    int i,j,r;

    scanf("%d",&r);

    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
            scanf("%d",&matrix[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i>=j)
                printf("%d ",matrix[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
