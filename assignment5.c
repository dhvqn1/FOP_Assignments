#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    int found=0;
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
        if(flag){
            printf("%d\n",min);
            found=1;
        }
    }
    if(!found) printf("No\n");

    int magic=1, sum1=0;

    for(int j=0;j<3;j++) sum1+=a[0][j];

    for(int i=0;i<3;i++){
        int r=0;
        for(int j=0;j<3;j++) r+=a[i][j];
        if(r!=sum1){ magic=0; break; }
    }

    for(int j=0;j<3 && magic;j++){
        int c=0;
        for(int i=0;i<3;i++) c+=a[i][j];
        if(c!=sum1){ magic=0; break; }
    }

    int d1=0,d2=0;
    for(int i=0;i<3;i++){
        d1+=a[i][i];
        d2+=a[i][2-i];
    }

    if(d1!=sum1 || d2!=sum1) magic=0;

    if(magic) printf("Magic\n");
    else printf("Not\n");

    int det =
        a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1]) -
        a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0]) +
        a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    if(det==0){
        printf("No inverse\n");
    } else {
        float inv[3][3];

        inv[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1])/(float)det;
        inv[0][1]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1])/(float)det;
        inv[0][2]=(a[0][1]*a[1][2]-a[0][2]*a[1][1])/(float)det;

        inv[1][0]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0])/(float)det;
        inv[1][1]=(a[0][0]*a[2][2]-a[0][2]*a[2][0])/(float)det;
        inv[1][2]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0])/(float)det;

        inv[2][0]=(a[1][0]*a[2][1]-a[1][1]*a[2][0])/(float)det;
        inv[2][1]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0])/(float)det;
        inv[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0])/(float)det;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%.2f ",inv[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
