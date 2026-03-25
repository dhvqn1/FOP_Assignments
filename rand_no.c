#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    int num3 = rand() % 900 + 100;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}
