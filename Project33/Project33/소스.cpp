#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, max, min, sum, num, a[10];
	printf("�Է��� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("%d���� ������ �Է��Ͻÿ� : ", num);
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
	printf("�ִ밪 = %d\n", max);
	printf("�ּҰ� = %d\n", min);
	printf("��� = %f\n", (double)sum / 10.0);
	return 0;
}