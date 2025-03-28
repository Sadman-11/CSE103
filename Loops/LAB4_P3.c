#include <stdio.h>

int main() {
    int input, count;
    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        if (input % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime number");
    }
    else {
        printf("not a prime number");
    }

    return 0;
}