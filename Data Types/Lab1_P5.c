#include <stdio.h>

int main(){
    int a, b, add, sub, multi, div, modulus;
    scanf("%d %d", &a, &b);

    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
    modulus = a % b;

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", multi);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", modulus);

    return 0;
}
