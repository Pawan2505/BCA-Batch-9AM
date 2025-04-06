#include<stdio.h>

int main(){
    int num1 = 100;
    int num2 = 20;

    char ch = '+';

    switch(ch){
        case '+':
            printf("Addition : %d", num1 + num2);
            break;
        case '-' :
            printf("Subtract : %d", num1 - num2);
            break;
        case '*':
            printf("Product : %d", num1 * num2);
            break;
        case '/':
            printf("Divide : %d", num1 / num2);
            break;
        default:
            printf("Please enter correct operator!");
    }
}