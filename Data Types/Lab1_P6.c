#include <stdio.h>

int main(){
    int a, num, num1, num2, num3;
    scanf("%d", &a);

    num = a % 10;
    num1 = (a/10) % 10;
    num2 = (a/100) % 10;
    num3 = (a/1000) % 10;

    printf("%d%d%d%d", num, num1, num2, num3);
    return 0;
}
