#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, fact = 1, isPrime = 1, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choic3: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Square Root = %f", sqrt(n));
            break;
        case 2:
            printf("Square = %d", n*n);
            break;
        case 3:
            printf("Cube = %d", n*n*n);
            break;
        case 4:
            if(n<=1)
               isPrime=0;
            else{
                for(i=2;i<=n/2;i++){
                    if(n%i==0){
                        isPrime=0;
                        break;
                    }
                }
            }
            if(isPrime)
                printf("Number is prime");
            else
                printf("Number is not prime");
            break;
        case 5:
            if(n<0)
                printf("Factorial is not defined");
            else{
                for(i=1;i<=n;i++)
                    fact=fact*i;
                printf("Factorial = %d", fact);
            }
            break;
        case 6:
            printf("Prime Factors: ");
            for(i=2;i<=n;i++)
            {
                while(n%i==0)
                {
                    printf("%d",i);
                    n=n/i;
                }
            }
            break;
        default:
        printf("Invalid Choice");
    }
    return 0;

}