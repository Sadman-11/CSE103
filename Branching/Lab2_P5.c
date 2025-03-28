#include <stdio.h>

int main() {
    int phy,chem,bio,math,computer;
    printf("input marks of phy chem bio math & computer: ");
    scanf("%d%d%d%d%d", &phy,&chem,&bio,&math,&computer);
    if(phy || chem || bio || math || computer > 100){
        printf("input a valid number");
        return 0;
}
    float avg = (phy + chem + bio + math + computer) / 5;

    if (avg >= 90 && avg <= 100)
        printf("Grade A\n");
    else if (avg >= 80)
        printf("Grade B\n");
    else if (avg >= 70)
        printf("Grade C\n");
    else if (avg >= 60)
        printf("Grade D\n");
    else if (avg >= 50)
        printf("Grade E\n");
    else if (avg < 40)
        printf("Fail\n");
    return 0;
}
