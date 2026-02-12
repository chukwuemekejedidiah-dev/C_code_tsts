#include <stdio.h>

int main() {
    int numbers[5], sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            sum += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);
    return 0;
}
