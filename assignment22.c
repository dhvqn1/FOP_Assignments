#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100];

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    printf("%d\n",strlen(a)-1);

    strcpy(c,a);
    printf("%s",c);

    if(strcmp(a,b)==0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    int i=0,j=strlen(a)-2,flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    if(strstr(a,b)!=NULL)
        printf("Substring\n");
    else
        printf("Not Substring\n");

    return 0;
}
