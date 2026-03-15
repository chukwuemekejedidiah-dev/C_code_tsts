#include <stdio.h>

int calculate(int a, int b, int (*operation)(int,int)){
    return operation(a,b);
}

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int main(){

    printf("%d\n", calculate(5,3,add));
    printf("%d\n", calculate(5,3,subtract));
    printf("%d\n", calculate(5,3,multiply));
}