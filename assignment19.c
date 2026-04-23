#include <stdio.h>
#include <string.h>

struct emp
{
    char name[50];
    char desig[50];
    char gender;
    int d,m,y;
    float sal;
};

int total(struct emp e[], int n)
{
    return n;
}

void count(struct emp e[], int n)
{
    int m=0,f=0,i;
    for(i=0;i<n;i++)
    {
        if(e[i].gender=='M' || e[i].gender=='m') m++;
        else if(e[i].gender=='F' || e[i].gender=='f') f++;
    }
    printf("%d\n%d\n",m,f);
}

void sal10k(struct emp e[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(e[i].sal>10000)
            printf("%s\n",e[i].name);
    }
}

void asst(struct emp e[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(e[i].desig,"Asst Manager")==0)
            printf("%s\n",e[i].name);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);

    struct emp e[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",e[i].name);
        scanf("%s",e[i].desig);
        scanf(" %c",&e[i].gender);
        scanf("%d%d%d",&e[i].d,&e[i].m,&e[i].y);
        scanf("%f",&e[i].sal);
    }

    printf("%d\n",total(e,n));

    count(e,n);

    sal10k(e,n);

    asst(e,n);

    return 0;
}
