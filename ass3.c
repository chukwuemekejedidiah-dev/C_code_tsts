#include <stdio.h>

int main() {
    int num[6], i, j, new;

    printf("Enter 6 integers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 6; j++) {
            if (num[i] < num[j]) {
                new = num[i];
                num[i] = num[j];
                num[j] = new;
            }
        }
    }

    printf("Sorted in descending order: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
