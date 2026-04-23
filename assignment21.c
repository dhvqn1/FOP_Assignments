#include <stdio.h>

int main()
{
    FILE *f1,*f2;
    char s[200];

    f1=fopen("input.txt","r");
    f2=fopen("output.txt","w");

    if(f1==NULL || f2==NULL)
    {
        printf("Error\n");
        return 0;
    }

    while(fgets(s,200,f1)!=NULL)
        fputs(s,f2);

    fclose(f1);
    fclose(f2);

    printf("Done\n");

    return 0;
}
