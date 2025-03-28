#include <stdio.h>

int main() {
    char Char;
    int Integer;
    float Float;

    scanf("%c %d %f", &Char, &Integer, &Float);
/*
    scanf("%c", &Char);
    scanf("%d", &Integer);
    scanf("%f", &Float);
*/
    printf("%d\n%2f\n%c", Integer, Float, Char);
    return 0;
}

