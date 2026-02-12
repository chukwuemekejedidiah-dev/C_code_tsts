


#include <stdio.h>

int main() {
    int numbers[5];
    int i, index;

   
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }

    
    printf("Enter an index (0 - 4): ");
    scanf("%d", &index);
 
    if (index < 0 || index > 4) {
        printf("Invalid index! Must be between 0 and 4.\n");
    } else {
        printf("Element at index %d is: %d\n", index, numbers[index]);
    }

   

    return 0;
}
