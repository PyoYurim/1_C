#include <stdio.h>
void main(void) {
	static float a[6][5] = { {3,5,6},
						   {2,1,4},
						   {8,7,1},
						   {3,5,4} };
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++) {
			a[i][3] += a[i][j];
			a[4][j] += a[i][j];
			a[4][3] += a[i][j];
			a[i][4] = a[i][3] / 3.0;
			a[5][j] = a[4][j] / 4.0;
			a[5][4] = a[4][3] / 12.0;
		}
	for (i = 0; i < 6; i++) {
		if (i == 4) printf("  ---------------------------------\n");
		for (j = 0; j < 5; j++) {
			if (j == 3) printf("   |");
			printf("%6.1f", a[i][j]);
		}
		printf("\n");
	}
}