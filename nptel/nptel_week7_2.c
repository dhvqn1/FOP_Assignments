#include <stdio.h>

int main()
{
    int A[20][20], B[20][20], C[20][20];
    int i,j,row,col;

    scanf("%d",&row);
    scanf("%d",&col);

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            C[i][j] = A[i][j] - B[i][j];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    return 0;
}
