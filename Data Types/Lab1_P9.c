#include <stdio.h>

int main(){
    int dhakaH = 11, dhakaM = 20, mumH = 10, mumM = 50;
    int dhaka_in_min = dhakaH * 60 + dhakaM;
    int mum_in_min = mumH * 60 + mumM;

    int time_diff = dhaka_in_min - mum_in_min;
    int diff_in_hours = time_diff / 60;
    int diff_in_mins = time_diff % 60;

    printf("Time Difference: %d hours %d minutes\n", diff_in_hours, diff_in_mins);
    return 0;
}
