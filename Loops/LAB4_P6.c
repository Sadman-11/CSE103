int main() {
    int i, a, b, c;
    scanf("%d%d", &a, &b);
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    printf("gcd: %d", a);
    return 0;
}