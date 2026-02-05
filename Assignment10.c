#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, choice, i;
    long int fact = 1;
    double power;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Power (x^y)");
    printf("\n6. Factorial (x!)");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Result = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero not possible\n");
            break;

        case 5:
            power = pow(a, b);
            printf("Result = %.0lf\n", power);
            break;

        case 6:
            for(i = 1; i <= a; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d = %ld\n", a, fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
