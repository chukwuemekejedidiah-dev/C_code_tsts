// // // // // #include <stdio.h>

// // // // // int main() {
// // // // //     int number[5], i, temp;

// // // // //     printf("Enter 5 integers:\n");
// // // // //     for (i = 0; i < 5; i++) {
// // // // //         scanf("%d", &number[i]);
// // // // //     }

// // // // //     printf("Before swap: ");
// // // // //     for (i = 0; i < 5; i++) {
// // // // //         printf("%d ", number[i]);
// // // // //     }

// // // // //     temp = number[0];
// // // // //     number[0] = number[4];
// // // // //     number[4] = temp;

// // // // //     printf("\nAfter swap: ");
// // // // //     for (i = 0; i < 5; i++) {
// // // // //         printf("%d ", number[i]);
// // // // //     }

// // // // //     return 0;
// // // // // }


// // // // // #include <stdio.h>

// // // // // int main() {
// // // // //     int num[5], i, j, temp;

// // // // //     printf("Enter 5 integers:\n");
// // // // //     for (i = 0; i < 5; i++) {
// // // // //         scanf("%d", &num[i]);
// // // // //     }

    
// // // // //     for (i = 0; i < 4; i++) {
// // // // //         for (j = i + 1; j < 5; j++) {
// // // // //             if (num[i] > num[j]) {
// // // // //                 temp = num[i];
// // // // //                 num[i] = num[j];
// // // // //                 num[j] = temp;
// // // // //             }
// // // // //         }
// // // // //     }

// // // // //     printf("Sorted in ascending order: ");
// // // // //     for (i = 0; i < 5; i++) {
// // // // //         printf("%d ", num[i]);
// // // // //     }

// // // // //     return 0;
// // // // // }


// // // // #include <stdio.h>

// // // // int main() {
// // // //     int num[6], i, j, new;

// // // //     printf("Enter 6 integers:\n");
// // // //     for (i = 0; i < 6; i++) {
// // // //         scanf("%d", &num[i]);
// // // //     }

    
// // // //     for (i = 0; i < 5; i++) {
// // // //         for (j = i + 1; j < 6; j++) {
// // // //             if (num[i] < num[j]) {
// // // //                 new = num[i];
// // // //                 num[i] = num[j];
// // // //                 num[j] = new;
// // // //             }
// // // //         }
// // // //     }

// // // //     printf("Sorted in descending order: ");
// // // //     for (i = 0; i < 6; i++) {
// // // //         printf("%d ", num[i]);
// // // //     }

// // // //     return 0;
// // // // }





// // // #include <stdio.h>

// // // int main() {
// // //     int numbers[5];
// // //     int i, index;

   
// // //     printf("Enter 5 integers:\n");
// // //     for (i = 0; i < 5; i++) {
// // //         printf("Number %d: ", i);
// // //         scanf("%d", &numbers[i]);
// // //     }

    
// // //     printf("Enter an index (0 - 4): ");
// // //     scanf("%d", &index);
 
// // //     if (index < 0 || index > 4) {
// // //         printf("Invalid index! Must be between 0 and 4.\n");
// // //     } else {
// // //         printf("Element at index %d is: %d\n", index, numbers[index]);
// // //     }

   

// // //     return 0;
// // // }


// // #include <stdio.h>

// // int main() {
// //     int num;
// //     long long factorial = 1;

// //     printf("Enter a positive integer: ");
// //     scanf("%d", &num);

// //     if (num < 0) {
// //         printf(" I cannot find the factorial of negative numbers.\n");
// //         return 1;
// //     }

// //     for (int i = 1; i <= num; i++) {
// //         factorial *= i;
// //     }

// //     printf(" The factorial of %d is %lld\n", num, factorial);
// //     return 0;
// // }


// #include <stdio.h>

// int main() {
//     int numbers[5];
//     int i, largestNumber;

    
//     printf("Enter 5 numbers:\n");
//     for (i = 0; i < 5; i++) {
//         printf("Number %d: ", i + 1);
//         scanf("%d", &numbers[i]);
//     }

 
//     largestNumber = numbers[0];

//     for (i = 1; i < 5; i++) {
//         if (numbers[i] > largestNumber) {
//             largestNumber = numbers[i];
//         }
//     }

//     printf("The highest number is %d\n", largestNumber);
//     return 0;
// }
