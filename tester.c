#include <stdio.h>

int main() {
    int number = 1, sum = 0;

    while(number <= 50) {
        if(number % 2 == 0) {
            sum += number;
        }
        number++;
    }

    printf("Sum of even numbers from 1 to 50 is: %d\n", sum);
    return 0;
}


