#include <stdio.h>

int main() {
    int n;
    printf("enter size: ");
    scanf("%d", &n);

    char arr[n];
    printf("enter characters: ");
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); //wasnt working without the space
    }
    printf("reversed character: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 0;
}
