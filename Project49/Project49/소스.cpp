#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int temp, i, r, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	temp = time(NULL);
	srand(temp);
	printf("*** �ֻ��� ������ ��� ***\n");
	for (i = 0; i < 100; i++) {
		r = rand() % 6;
		if (r == 0)
			count1 += 1;
		else if (r == 1)
			count2 += 1;
		else if (r == 2)
			count3 += 1;
		else if (r == 3)
			count4 += 1;
		else if (r == 4)
			count5 += 1;
		else if (r == 5)
			count6 += 1;
	}

	printf("   1 �� : %d ȸ\n", count1);
	printf("   2 �� : %d ȸ\n", count2);
	printf("   3 �� : %d ȸ\n", count3);
	printf("   4 �� : %d ȸ\n", count4);
	printf("   5 �� : %d ȸ\n", count5);
	printf("   6 �� : %d ȸ\n", count6);

	return 0;

}
