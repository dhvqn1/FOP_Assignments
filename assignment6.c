#include <stdio.h>

long long f1(int n){
    long long r=1;
    int i;
    for(i=1;i<=n;i++)
        r=r*i;
    return r;
}

long long f2(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*f2(n-1);
}

int main(){
    int n;
    scanf("%d",&n);

    printf("%lld\n",f1(n));
    printf("%lld\n",f2(n));

    return 0;
}


