#include<stdio.h>
int main() {
   int number, sum = 0;
   char text;
   
   printf(" Enter a positive number: ");
   scanf("%d%c",&number,&text);
   if (number <= 0) {
    printf("Enter valid input\n");
   return 1;
    
    int text = number;
    while( text > 0){
        sum += text % 10;
        text /= 10;}
   }
       printf("The sum of digits in %d is %d\n", number, sum);
    return 0;
}


   





