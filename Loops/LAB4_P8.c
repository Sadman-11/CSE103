#include <stdio.h>

int main() {
    int n, p1 = 1, p2 = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", p1);
        next = p1 + p2;
        p1 = p2;
        p2 = next;
    }
    return 0;
}