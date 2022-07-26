#include <stdio.h>
int main() {
	int a[3][4], i, j, k = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			k = k + 10;
			a[i][j] = k;
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
		
		return 0;
	}
	
