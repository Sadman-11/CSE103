int main() {
    int i, sum = 0;
    printf("enter a number: ");
    scanf("%d", &i);

    while (i > 0 || sum > 9) {
        if (i == 0) {
            i = sum;
            sum = 0;
        }
        sum += i % 10;
        i /= 10;
    }
    printf("%d", sum);
    return 0;
}