//factorial using recursion
#include <stdio.h>
int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}

//Fibonacci series
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

//Sum of first n natural numbers
#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d", sum);
    return 0;
}

//Calculate power (n^p)
#include <stdio.h>
int main() {
    int n, p, result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &n, &p);

    for (int i = 1; i <= p; i++)
        result *= n;

    printf("Result = %d", result);
    return 0;
}

//Reverse a number
#include <stdio.h>
int main() {
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reversed = %d", rev);
    return 0;
}

//check if number is palindrome
#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (temp == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

//Find GCD of two numbers
#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);
    return 0;
}

//Binary Search
#include <stdio.h>

int main() {
    int arr[100], n, key, low = 0, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found");
    return 0;
}

//Print numbers from 1 to n
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}

//Tower of Hanoi
#include <stdio.h>

void toh(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    toh(n - 1, from, to, aux);
    printf("Move disk %d from %c to %c\n", n, from, to);
    toh(n - 1, aux, from, to);
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    toh(n, 'A', 'B', 'C');
    return 0;
}
