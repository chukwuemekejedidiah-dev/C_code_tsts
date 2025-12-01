#include <stdio.h>

int main() {
    int count = 1, num, largest;

    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = num;

    while(count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        if(num > largest) {
            largest = num;
        }
        count++;
    }

    printf("The largest number entered is: %d\n", largest);
    return 0;
}
