#include <stdio.h>

int main() {
    int score;
    printf("enter your score: ");
    scanf("%d", &score);
    score >= 40 ? printf("Pass") : printf("Fail");
    return 0;
}
