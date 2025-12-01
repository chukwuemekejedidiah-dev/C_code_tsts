// // // // #include <stdio.h>

// // // // int main() {
// // // //     char matrix[3][3];
// // // //     char input;
// // // //     int round = 0;

// // // //     printf("Welcome to X and O game\n");

// // // //     while (round < 9) {
// // // //         printf("Round %d: Enter X or O: ", round + 1);
// // // //         scanf(" %c", &input);

        
// // // //         if (input == 'x') input = 'X';
// // // //         if (input == 'o') input = 'O';

      
// // // //         if (input != 'X' && input != 'O') {
// // // //             printf("Invalid input! Please enter only X or O.\n");
// // // //             continue;
// // // //         }

// // // //     int row = round / 3;
// // // //     int col = round % 3;
// // // //     matrix[row][col] = input;
// // // //     round++;


       

// // // //     }
       
// // // //     printf("\nFinal Matrix:\n");
// // // //     for (int i = 0; i < 3; i++) {
// // // //         for (int j = 0; j < 3; j++) {
// // // //             printf(" %c", matrix[i][j]);
// // // //         }
// // // //         printf("\n");
// // // //     }

// // // //     return 0;
// // // // }







// // // #include <stdio.h>

// // // int main() {
// // //     char matrix[3][3];
// // //     char input;
// // //     int round = 0;

// // //     printf("Welcome to X and O game\n");

// // //     while (round < 9) {
// // //         printf("Round %d: Enter X or O: ", round + 1);
// // //         scanf(" %c", &input);

// // //         if (input != 'X' && input != 'O') {
// // //             printf("Invalid input! Please enter only X or O.\n");
// // //             continue;
// // //         }

// // //         matrix[round / 3][round % 3] = input;
// // //         round++;
// // //     }

// // //     printf("\nFinal Matrix:\n");
// // //     for (int i = 0; i < 3; i++) {
// // //         for (int j = 0; j < 3; j++) {
// // //             printf("%c ", matrix[i][j]);
// // //         }
// // //         printf("\n");
// // //     }

// // //     return 0;
// // // }




#include <stdio.h>

int main() {
    char matrix[3][3];
    char input;
    int slot;
    int round = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = ' ';
        }
    }

    printf("Welcome to Tic Tac Toe game\n");
    printf("Slots numbers 1-9 listed below. Choose Wisely :\n");
    printf(" 1 | 2 | 3\n");
    printf("-----------\n");
    printf(" 4 | 5 | 6\n");
    printf("-----------\n");
    printf(" 7 | 8 | 9\n\n");

    while (round < 9) {
        printf("Round %d: Enter slot number (1-9): ", round + 1);
        scanf(" %d", &slot);

        if (slot < 1 && slot > 9) {
            printf("Invalid slot number! Please enter a number between 1 and 9.\n");
            continue;
        }

        int row = (slot-1) / 3;
        int col = (slot-1) % 3;
        
        if (matrix[row][col] != ' ') {
            printf("Slot already taken! Choose another.\n");
            continue;
        }

    
        input = (round % 2 == 0) ? 'X' : 'O';
        matrix[row][col] = input;
        round++;

        printf("\nGame Results:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c", matrix[i][j]);
                if (j < 2) printf("|");
            }
            printf("\n");
            if (i < 2) printf("-----------\n");
        }
        printf("\n");
    }

    printf("Game Over!\n");
    return 0;
}


