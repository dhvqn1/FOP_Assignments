#include <stdio.h>

long long int fact(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", n, fact(n));
    }

    return 0;
}

long long int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return (long long int)n * fact(n - 1);
    }
}


