#include <stdio.h>

int main() {
    int base, pow;
    float total=1.0;

    printf("enter base: ");
    scanf("%d", &base);
    printf("enter power: ");
    scanf("%d", &pow);

    if (pow > 0) {
        for (int i = 1; i <= pow; i++){
            total *= base;
        }
        printf("Result is %.2f", total);
    }
    else if (pow < 0){
            pow = -pow;
            for (int i =1; i<=pow; i++){
                total *= base;
            }
            printf("Result is %.2f", total);
    }
    else {
        printf("Result is 0.00");
    }

    return 0;
}
