#include <stdio.h>


void clearBuffer() {
    while (getchar() != '\n');
}

int main() {
    int number;
    char term;
   
    while (1) {
        printf("Enter a positive integer (≥ 2): ");
        if (scanf("%d%c", &number, &term) != 2 || term != '\n') {
            printf("Invalid input! Please enter a valid integer.\n");
            clearBuffer();
        } else if (number < 2) {
            printf("Number must be at least 2.\n");
        } else {
            break; 
        }
    }

    
    for (int i = 2; i <= number; i++) {
        printf("\nMultiplication Table of %d\n", i);
        for (int e = 1; e <= 12; e++) {
            printf("%d x %d = %d\n", i, e, i * e);
        }
    }

    return 0;
}


