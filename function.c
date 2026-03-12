
#include <stdio.h>
int count_digits(int num) {
    int count = 0;
    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        num /= 10; 
        count++; 
    }
    return count;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int digits = count_digits(number);
    printf("The number of digits in %d is: %d\n", number, digits);
    return 0;
}
