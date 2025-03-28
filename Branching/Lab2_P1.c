#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    if (a < b)
        printf("Minimum Number is %d\n",a);
    else
        printf("Minimum Number is %d\n",b);
    return 0;
}
