#include <stdio.h>

int main() {
    int num, total = 1;

    printf("enter a number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++){
        total *= i;
    }
    printf("factorial of %d is %d", num, total);


    return 0;
}
