#include <stdio.h>

int main() {
    int num, prime = 1;

    printf("Enter a positive integer (>1): ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("%d is prime.\n", num);
    else
        printf("%d is not prime.\n", num);

    return 0;
}

