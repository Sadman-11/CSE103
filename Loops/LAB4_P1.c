#include <stdio.h>
#include <limits.h>
int main()
{
    int num, max = INT_MIN, min = INT_MAX;
    max = num;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == -1)
            break;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }

    printf("difference: %d\n", max-min);
    return 0;
}