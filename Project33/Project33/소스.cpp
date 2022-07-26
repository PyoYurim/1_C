#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, max, min, sum, num, a[10];
	printf("입력할 정수의 개수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d개의 정수를 입력하시오 : ", num);
	for (i = 0; i < num; i++)
		scanf("%d", &a[i]);
	max = a[0];
	min = a[0];
	sum = 0;
	for (i = 1; i < num; i++) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
		sum += a[i];
	}
	printf("최대값 = %d\n", max);
	printf("최소값 = %d\n", min);
	printf("평균 = %f\n", (double)sum / 10.0);
	return 0;
}