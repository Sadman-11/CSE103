#include <stdio.h>

int main() {
    int num, reversed = 0, input, digit;
    
    printf("Input a number: ");
    scanf("%d", &num);
    
    input = num;
    
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    if (input == reversed)
        printf("%d is a palindrome number.\n", input);
    else
        printf("%d is not a palindrome number.\n", input);

    return 0;
}