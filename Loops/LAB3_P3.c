#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum += num;

    while(num){
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0){
            break;
        }
        sum += num;

    }
    printf("Sum: %d\n", sum);
    return 0;
}
