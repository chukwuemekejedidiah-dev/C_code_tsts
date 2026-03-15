#include <stdio.h>

int validatePassword(char password[]){

    int i = 0;
    int length = 0;
    int hasNumber = 0;
    int hasUpper = 0;

    while(password[i] != '\0'){

        char ch = password[i];

        length++;

        if(ch >= '0' && ch <= '9'){
            hasNumber = 1;
        }

        if(ch >= 'A' && ch <= 'Z'){
            hasUpper = 1;
        }

        i++;
    }

    if(length >= 8 && hasNumber && hasUpper){
        return 1;
    }

    return 0;
}