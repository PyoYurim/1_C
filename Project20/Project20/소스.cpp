#include <stdio.h>
void main()
{
	int C, F = 0;
	printf("����    ȭ��\n");
	printf("-----------------------\n");
	for (C = 10; C <= 100; C = C + 10)
	{
		F = 9.0 / 5.0 * C + 32;

		printf("%d        %d\n", C, F);
	}
}