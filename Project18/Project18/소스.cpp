#include <stdio.h>
int main(void)
{
	int C = 0, F = 0;

	while (C <= 100)
	{
		F = 9.0 / 5.0 * C + 32;
	}
	C = C + 10;
	printf("¼·¾¾=%d, È­¾¾=%d", C, F);

	return 0;
}