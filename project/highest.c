#include <stdio.h>

int main() {
    int numbers[5];
    int i, largestNumber;

    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

 
    largestNumber = numbers[0];

    for (i = 1; i < 5; i++) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    printf("The highest number is %d\n", largestNumber);
    return 0;
}


// #include<stdio.h>
// int main() {
//     int numbers[5];
//     int i,largestNumber,smallestNumber,difference;

//     printf("Enter 5 numbers:\n")



//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int numbers[6] = {5,2,8,12,3};
//     int i, minus;
//      int largestNum = numbers[0],smallestNum = numbers[0];
   

//     for ( i = 0; i < 6; i++) {
//         if (numbers[i]> largestNum) {
//             largestNum = numbers[i];
//         }
//     }


//     for ( i= 0; i< 6; i++){
//         if (numbers[i]< smallestNum) {
//             smallestNum = numbers[i];
//     }
//     }

//     minus = largestNum - smallestNum;
//     printf("Maximum difference is %d",minus);
    

    
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int numbers[5] = {5, 2, 8, 12, 3}; 
//     int largestNumber = numbers[0],smallestNumber = numbers[0],difference;

//     for (int i = 0; i < 5; i++) {
//         if (numbers[i] > largestNumber)
//             largestNumber = numbers[i];
//     }
 
 
//     for(int i = 0; i < 5; i++) {
//     if (numbers[i] < smallestNumber)
//             smallestNumber = numbers[i];
//     }

//     difference = largestNumber - smallestNumber;

    
//     printf(" The maximum difference is %d\n", difference);

//     return 0;
// }



// #include<stdio.h>
// int main() {
//     for ( char alphabets = 'A'; alphabets <= 'Z'; alphabets++) {
//         printf("%c ",alphabets);
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int matrix[][3] = {
//         {"1","2","3"},
//         {"2","6","3"}
//     };
//     printf("%d",matrix[0][1]);
//     printf("\n");


//     return 0;
// }