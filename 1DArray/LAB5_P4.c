#include <stdio.h>

int main() {
    int n1;
    printf("enter n1 size: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("enter array value: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("enter n2 size: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("enter array value: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1 + n2;
    int arr3[n3];

    for (int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }


    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}
