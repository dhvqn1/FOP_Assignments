#include <stdio.h>

int main()
{
    int a,b,i,sd=1;

    scanf("%d %d",&a,&b);

    for(i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            sd=i;
            break;
        }
    }

    int x=a,y=b,r;

    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }

    printf("%d\n",sd);
    printf("%d\n",x);

    return 0;
}
