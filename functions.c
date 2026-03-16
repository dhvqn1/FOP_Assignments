#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);
int fact(int n);

int main() {
    int choice, num1, num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", add(num1, num2));
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", sub(num1, num2));
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d\n", mul(num1, num2));
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%f\n", div(num1, num2));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("%d\n", fact(num1));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b == 0) {
        printf("division by zero error\n");
        return 0;
    }
    return (float)a / b;
}

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
