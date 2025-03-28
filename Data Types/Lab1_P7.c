#include <stdio.h>

int main(){
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a + b;
    y = a - b;
    x = a - b;
    printf("Before Swap a:%d, b:%d\n", a, b);
    printf("After Swap a: %d, b: %d", x,y);

    return 0;
}
