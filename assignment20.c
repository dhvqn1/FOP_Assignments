#include <stdio.h>

void swap1(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
}

void swap2(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    swap1(x,y);

    swap2(&x,&y);
    printf("%d %d\n",x,y);

    return 0;
}
