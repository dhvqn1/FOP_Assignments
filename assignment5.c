#include<stdio.h>

int main(){
    int a[3][3], b[3][3], sum[3][3];

    // Input matrices
    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&b[i][j]);
  
    printf("\nMatrix Addition:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix A:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        int min=a[i][0], col=0;

        for(int j=1;j<3;j++){
            if(a[i][j]<min){
                min=a[i][j];
                col=j;
            }
        }

        int flag=1;
        for(int k=0;k<3;k++){
            if(a[k][col]>min){
                flag=0;
                break;
            }
        }

        if(flag)
            printf("\nSaddle Point: %d\n",min);
    }
  
    int sum1=0;
    for(int j=0;j<3;j++)
        sum1+=a[0][j];

    int magic=1;
    for(int i=0;i<3;i++){
        int rowsum=0;
        for(int j=0;j<3;j++)
            rowsum+=a[i][j];

        if(rowsum!=sum1){
            magic=0;
            break;
        }
    }

    if(magic)
        printf("\nMatrix A is Magic Square\n");
    else
        printf("\nMatrix A is NOT Magic Square\n");

    return 0;
}
