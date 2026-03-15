#include <stdio.h>

int reverseNumber(int num){
    int reversed = 0;

    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return reversed;
}

int isPalindrome(int num){

    int reversed = reverseNumber(num);

    if(num == reversed){
        return 1;
    }

    return 0;
}

int main(){
    printf("%d\n", isPalindrome(121));
    printf("%d\n", isPalindrome(123));
}