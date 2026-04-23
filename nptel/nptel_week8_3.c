#include <stdio.h>

int binary_conversion(int);

int main()
{
    int num, bin;

    scanf("%d",&num);

    bin = binary_conversion(num);

    printf("The binary equivalent of %d is %d\n", num, bin);

    return 0;
}

int binary_conversion(int num)
{
    if(num == 0)
        return 0;

    return (num % 2) + 10 * binary_conversion(num / 2);
}
