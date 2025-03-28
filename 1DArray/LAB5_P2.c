#include <stdio.h>

int main() {
    int n;
    float average = 0.00, sum = 0.00;
    printf("enter the size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = sum / n;
    printf("Average is %.2f", average);

    return 0;
}
