#include <stdio.h>

int main() {
int n,originalnum,remainder,sum=0;
printf("Enter a number: ");
    scanf("%d", &n);
    originalnum=n;
while (originalnum != 0) {
        remainder =originalnum % 10;
        sum += remainder * remainder * remainder;
        originalnum /= 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }




    return 0;
}
