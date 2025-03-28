#include <stdio.h>
int main()
{
    int input, count = 0;
    printf("Enter a number: ");
    scanf("%d", &input);
    while (input != 0) {
        input /= 10;
        count++;
    }
    printf("%d", count);
    return 0;
}