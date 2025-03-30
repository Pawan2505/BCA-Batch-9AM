#include<stdio.h>
int main(){
    int num = 10;

    printf("%d is int type  number\n", num);
    printf(" is int type %d number\n", num);
    printf(" is  %d  int typenumber\n", num);
    printf(" is int type %d number\n", num);

    float price = 10.5;
    printf("%0.3f value\n", price);

    double pi = 3.14159;
    printf("%0.2lf\n", pi); // Output: 3.141590

    char letter = 'A';
    printf("%c\n", letter); // Output: A


    // c does not support string data type -> we create string datatype in c programming with the help of char

    char name[6] = "Pawan";

    printf("name is %s\n", name);

    char firstname[] = "John";
    printf("%s \n", firstname); // Output: John

    unsigned int value = 10;

    printf("%u", value);
}