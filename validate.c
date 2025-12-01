// // // // // // #include <stdio.h>

// // // // // // int main() {
// // // // // //     int number, sum = 0;

// // // // // //     printf("Enter a positive number: ");
// // // // // //     scanf("%d", &number);

// // // // // //     if (number <= 0) {
// // // // // //         printf("Invalid input! Please enter a number greater than 0.\n");
// // // // // //         return 1;
// // // // // //     }

// // // // // //     int emeke = number;
// // // // // //     while (emeke > 0) {
// // // // // //         sum += emeke % 10;
// // // // // //         emeke /= 10;
// // // // // //     }

// // // // // //     printf("The sum of digits in %d is %d\n", number, sum);
// // // // // //     return 0;
// // // // // // }


// // // // // #include <stdio.h>

// // // // // int main() {
// // // // //     int num, prime = 1;

// // // // //     printf("Enter a positive integer (>1): ");
// // // // //     scanf("%d", &num);

// // // // //     if (num <= 1) {
// // // // //         printf("Invalid input.\n");
// // // // //         return 1;
// // // // //     }

// // // // //     for (int i = 2; i <= num / 2; i++) {
// // // // //         if (num % i == 0) {
// // // // //             prime = 0;
// // // // //             break;
// // // // //         }
// // // // //     }

// // // // //     if (prime)
// // // // //         printf("%d is prime.\n", num);
// // // // //     else
// // // // //         printf("%d is not prime.\n", num);

// // // // //     return 0;
// // // // // }

// // // // #include <stdio.h>


// // // // void clearBuffer() {
// // // //     while (getchar() != '\n');
// // // // }

// // // // int main() {
// // // //     int number;
// // // //     char term;
   
// // // //     while (1) {
// // // //         printf("Enter a positive integer (≥ 2): ");
// // // //         if (scanf("%d%c", &number, &term) != 2 || term != '\n') {
// // // //             printf("Invalid input! Please enter a valid integer.\n");
// // // //             clearBuffer();
// // // //         } else if (number < 2) {
// // // //             printf("Number must be at least 2.\n");
// // // //         } else {
// // // //             break; 
// // // //         }
// // // //     }

    
// // // //     for (int i = 2; i <= number; i++) {
// // // //         printf("\nMultiplication Table of %d\n", i);
// // // //         for (int e = 1; e <= 12; e++) {
// // // //             printf("%d x %d = %d\n", i, e, i * e);
// // // //         }
// // // //     }

// // // //     return 0;
// // // // }


// // // #include <stdio.h>

// // // int main() {
// // //     int count = 1, num, largest;

// // //     printf("Enter number 1: ");
// // //     scanf("%d", &num);
// // //     largest = num;

// // //     while(count < 10) {
// // //         printf("Enter number %d: ", count + 1);
// // //         scanf("%d", &num);
// // //         if(num > largest) {
// // //             largest = num;
// // //         }
// // //         count++;
// // //     }

// // //     printf("The largest number entered is: %d\n", largest);
// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main() {
// //     int number = 1, sum = 0;

// //     while(number <= 50) {
// //         if(number % 2 == 0) {
// //             sum += number;
// //         }
// //         number++;
// //     }

// //     printf("Sum of even numbers from 1 to 50 is: %d\n", sum);
// //     return 0;
// // }



// #include <stdio.h>

// int main() {
//     int numbers[5], sum = 0;

//     printf("Enter 5 numbers:\n");
//     for (int i = 0; i < 5; i++) {
//         if (scanf("%d", &numbers[i]) != 1) {
//             printf("Invalid input.\n");
//             return 1;
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         if (numbers[i] % 2 == 0) {
//             sum += numbers[i];
//         }
//     }

//     printf("Sum of even numbers: %d\n", sum);
//     return 0;
// }


