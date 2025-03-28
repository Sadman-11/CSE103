#include <stdio.h>

int main() {
    int num, count = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (count <= num){
        printf("%d\n", count);
        count++;
    }
    return 0;
}
