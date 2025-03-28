#include <stdio.h>

int main() {
    int num, total = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    for (int i=0; i<=10; i++){
        total = num*i;
        printf("%dx%d = %d\n", num, i, total);
    }
    return 0;
}
