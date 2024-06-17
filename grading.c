#include <stdio.h>
int main()
{
    int adm, bcs_1101, bcs_1102, ucc_101, total_score;
    float avg_score;

    printf("Input the Admission Number: \n");
    scanf("%d", &adm);

    printf("Input the marks for: \n BCS 1101 \n BCS 1102 \n UCC 101 \n respectively: \n");
    scanf("%d %d %d", &bcs_1101, &bcs_1102, &ucc_101);

    total_score = bcs_1101 + bcs_1102 + ucc_101;
    avg_score = total_score / 3;

    printf("Admission No: %d \n", adm);
    printf("Marks in BCS 1101: %d \n", bcs_1101);
    printf("Marks in BCS 1102: %d \n", bcs_1102);
    printf("Marks in UCC 101: %d \n", ucc_101);
    printf("Total Marks = %d \n", total_score);
    printf("Average Score = %.2f \n", avg_score);
    if (avg_score >= 80)
    {
        printf("Classification = First Class Honors\n");
    }
    else if ((avg_score >= 60) && (avg_score <= 79))
    {
        printf("Classification = Second Class\n");
    }
    else
    {
        printf("Classification = Pass\n");
    }
}