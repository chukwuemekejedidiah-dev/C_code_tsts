
// #include <stdio.h>

// int main() {
//     int pin, choice, amount;
//     int balance = 1000;

//     // PIN input loop
//     while (1) {
//         printf("Enter PIN: ");
//         if (scanf("%d", &pin) != 1) {
//             printf("Invalid input. Try again.\n");
//             scanf("%*s");  // discard invalid input string
//             continue;
//         }
//         if (pin == 1234)
//             break;
//         else
//             printf("Incorrect PIN. Try again.\n");
//     }

//     // Main menu loop
//     while (1) {
//         printf("\nMenu:\n1. Check balance\n2. Withdraw money\n3. Deposit money\n4. Exit\nChoose an option: ");
//         if (scanf("%d", &choice) != 1) {
//             printf("Invalid input. Try again.\n");
//             scanf("%*s");  // discard invalid input string
//             continue;
//         }}

//         switch (choice) {
//             case 1:
//                 printf("Current balance: $%d\n", balance);
//                 break;

//             case 2:
//                 printf("Enter amount to withdraw: ");
//                 if (scanf("%d", &amount) != 1) {
//                     printf("Invalid input.\n");
//                     if (amount <= 0) 
//                     printf("Enter a positive amount.");
//                  else if (amount > balance) 
//                     printf("Insufficient balance.");
//                  else 
//                     balance -= amount;
//                     printf("Withdrawn%d. New balance:");
//                     break;

//            case 3:
//              printf("Enter amount to deposit: ");
//             if (scanf("%d", &amount) != 1) {
//               printf("Invalid input.\n");
//               scanf("%*s");  // discard invalid input
//               break;
//             }
//             if (amount <= 0) {
//               printf("Enter a positive amount.\n");
//             } else {
//               balance += amount;
//               printf("Deposited %d\n", amount, balance);
//             }
//               break;

//                 if (amount <= 0) 
//                     printf("Enter a positive amount.");
//                  else 
//                     balance += amount;
//                     printf("Deposited%d. New balance: $%d\n", amount, balance);
//                 }
//                 break;

//             case 4:
//                 printf("Thank you! Goodbye.\n");
//                 return 0;

//             default:
//                 printf("Invalid option. Try again.\n");
//         }
//     return 0;
//     }



#include <stdio.h>

int main() {
    char matrix[3][3], input;
    int round = 0;

    printf("Welcome to X and O game\n");

    while (round < 9) {
        printf("Round %d: Enter X or O: ", round + 1);
        scanf(" %c", &input);

        if (input != 'X' && input != 'O') {
            printf("Invalid input! Please enter only X or O.\n");
            continue;
        }

       int row = round / 3, col = round % 3;
       matrix[row][col] = input;
       round++;
    }

    printf("\nFinal Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

