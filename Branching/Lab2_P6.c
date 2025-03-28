#include <stdio.h>

int main() {
    int years,weeks,days,total_days;

    printf("Enter number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    total_days = total_days % 365;

    weeks = total_days / 7;
    days = total_days % 7;

    printf("Years: %d\nWeeks: %d\nDays: %d", years, weeks, days);
    return 0;
}
