#include <stdio.h>

int main()
{
    char ch[100];
    int i=0, upper=0, lower=0;

    scanf(" %[^\n]s", ch);

    while(ch[i] != '\0')
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        else if(ch[i] >= 'a' && ch[i] <= 'z')
            lower++;

        i++;
    }

    printf("Uppercase Letters : %d\n", upper);
    printf("Lowercase Letters : %d", lower);

    return 0;
}
