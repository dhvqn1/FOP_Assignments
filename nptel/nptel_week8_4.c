#include <stdio.h>
#include <string.h>

void reverse(char[], int, int);

int main()
{
    char str1[20];
    int size;

    scanf("%s", str1);

    size = strlen(str1);

    reverse(str1, 0, size - 1);

    printf("The string after reversing is: %s", str1);

    return 0;
}

void reverse(char str1[], int i, int j)
{
    char temp;

    if(i >= j)
        return;

    temp = str1[i];
    str1[i] = str1[j];
    str1[j] = temp;

    reverse(str1, i + 1, j - 1);
}
