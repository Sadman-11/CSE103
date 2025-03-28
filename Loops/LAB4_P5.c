#include <stdio.h>
int main()
{
    int input, count = 0;
    printf("enter a number: ");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++) {
        if (i % 2 == 0) {
            count += i * i;
        }
        else {
            count -= i * i;
        }
    }
    printf("%d", count);
    return 0;
}