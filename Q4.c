#include <stdio.h>

int main() {
    int input, sum = 0;

    do {

        printf("Enter a number: ");
        scanf("%d", &input);
	
     
        sum += input;


        printf("sum: %d\n", sum);
    } while (input != 0);


    printf("Final sum: %d\n", sum);

    return 0;
}

