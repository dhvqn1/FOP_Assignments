#include <stdio.h>

int HCF(int, int);

int main()
{
    int a,b,c,d,result;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    result = HCF(HCF(a,b), HCF(c,d));

    printf("The HCF is %d", result);

    return 0;
}

int HCF(int x, int y)
{
    while(y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
