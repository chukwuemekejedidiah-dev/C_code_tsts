#include <stdio.h>

int main() {
    int max, number;

    printf("Enter 10 numbers:\n");

    scanf("%d", &number);
    max = number;

    for (int i = 1; i < 10; i++) {
        scanf("%d", &number);
        if (number > max) {
            max = number;
        }
    }

    printf("Maximum number is: %d\n", max);
    return 0;
}