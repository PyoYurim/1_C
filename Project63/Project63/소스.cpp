#include <stdio.h>
int comp(int a, int b, int *sum, int *gap, int *mul, int *div) {
	*sum = a + b;
	*gap = a - b;
	*mul = a * b;
	*div = a / b;

	return 0;
}


int main() {
	int a = 100, b = 50;
	int sum, gap, mul, div;
	comp(a, b, &sum, &gap, &mul, &div);
	printf("합 = %d, 차 = %d, 곱 = %d, 나누기 = %d", sum, gap, mul, div);

} 
