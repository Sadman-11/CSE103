#include <stdio.h>

int main() {
    int n, target, ind = -1;

    printf("enter size: ");
    scanf("%d", &n);

    printf("enter target: ");
    scanf("%d", &target);

    int arr[n];

    printf("enter digits: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            ind = i;
            break;
        }
    }

    if (ind != -1) {
        printf("Target %d is found at index %d", target, ind);
    } else {
        printf("Target %d is not found\n", target);
    }

    return 0;
}
