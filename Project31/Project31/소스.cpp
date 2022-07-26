#include <stdio.h>
int main() {
	int num[5] = { 98, 35, 23, -36, 58 };
	int *p, sum = 0;
	double avg = 0.0;
	for (p = num; p < num + 5; p++)
		sum += *p;
	avg = (double)sum / 5;
	printf("%f\n", avg);
	return 0;
}