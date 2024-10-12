#include <stdio.h>

int main() {
    int i, n, a = 0;
    int t1 = 0, t2 = 1, nextTerm;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            a = 1;
            break;
        }
    }
    if (n == 1) {
        printf("The number is neither prime nor composite.\n");
    }
    // If 'a' remains 0, the number is prime
    else if (a == 0) {
        printf("The given number is prime.\n");
        

        printf("Fibonacci series up to %d:\n", n);

        nextTerm = t1;
        while (nextTerm <= n) {
            printf("%d ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        printf("\n");
    } else {
        printf("The given number is composite.\n");
    }

    return 0;
}

