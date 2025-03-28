#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
    printf("enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("even numbers: %d\n", even);
    printf("odd numbers: %d", odd);

    return 0;
}
