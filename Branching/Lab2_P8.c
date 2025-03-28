#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("input: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("math error\n");
            break;
        case '%':
            if (num2 != 0)
                printf("%d\n", num1 % num2);
            else
                printf("math error\n");
            break;
        default:
            printf("invalid operator\n");
            break;
    }

    return 0;
}
