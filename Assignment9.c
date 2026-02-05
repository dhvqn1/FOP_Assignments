#include <stdio.h>

int main()
{
    int num, temp, remainder, sum=0;
    
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + (remainder*remainder*remainder);
        num = num / 10;
    }

    if (sum == temp) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}