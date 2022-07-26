#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main()
{
    char id[12];
    int kor, eng, mat, tot;
    FILE* fin;
    fin = fopen("c:\\db\\in.txt", "r");

    printf("      중간 고사 성적 알림표     \n");

    printf("=============================================\n");
    printf(" 학번    국어   영어   수학   총점   평균 \n");
    printf("=============================================\n");

    while (1)
    {
        fscanf(fin, "%s %d %d %d", id, &kor, &eng, &mat);

        tot = kor + eng + mat;

        printf("%s   %d     %d     %d    %d    %.1f\n", id, kor, eng, mat, tot, (float)tot / 3.0);

        if (feof(fin))
            break;
    }
    printf("=============================================");

    fclose(fin);

}