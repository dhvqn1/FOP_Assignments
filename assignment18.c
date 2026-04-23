#include <stdio.h>

int len(char s[])
{
    int i=0;
    while(s[i]!='\0' && s[i]!='\n') i++;
    return i;
}

void rev(char s[])
{
    int i=0,l=len(s);
    for(i=l-1;i>=0;i--)
        printf("%c",s[i]);
    printf("\n");
}

int eq(char a[], char b[])
{
    int i=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i]) return 0;
        i++;
    }
    if(a[i]==b[i]) return 1;
    return 0;
}

int pal(char s[])
{
    int i=0,j=len(s)-1;
    while(i<j)
    {
        if(s[i]!=s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int sub(char a[], char b[])
{
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        j=0;
        while(a[i+j]==b[j] && b[j]!='\0' && b[j]!='\n')
            j++;
        if(b[j]=='\0' || b[j]=='\n')
            return 1;
    }
    return 0;
}

int main()
{
    char a[100], b[100];

    fgets(a,100,stdin);
    fgets(b,100,stdin);

    printf("%d\n",len(a));

    rev(a);

    if(eq(a,b)) printf("Equal\n");
    else printf("Not Equal\n");

    if(pal(a)) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    if(sub(a,b)) printf("Substring\n");
    else printf("Not Substring\n");

    return 0;
}
