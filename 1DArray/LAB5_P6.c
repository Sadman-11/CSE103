#include <stdio.h>

int main() {
    int n, max, min, diff;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n];

    printf("enter array values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    diff = max - min;
    printf("Difference: %d", diff);
    return 0;
}
