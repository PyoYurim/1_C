#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main() {
    char num[10];
    int kor, eng, mat, tot;
    double avg;
    FILE* fin;
    fin = fopen("c:\\in.txt", "r");

    printf("          �߰� ��� ���� �϶�ǥ          \n");
    printf("==============================================\n");
    printf("    �й�    ����  ����  ����   ����   ���  \n");
    printf("==============================================\n");

    while (1) {
        fscanf(fin, "%s %d %d %d", num, &kor, &eng, &mat);

        tot = kor + eng + mat;
        avg = tot / 3.0;

        printf("%s      %d    %d    %d    %d    %.1f\n", num, kor, eng, mat, tot, avg);

        if (feof(fin))
            break;
    }

    fclose(fin);

    printf("==============================================\n");

    return 0;
}