#include <stdio.h>
void main()
{
	int C = 0, F = 0;

	printf("¼·¾¾     È­¾¾\n");
	printf("-------------------\n");

	while (C < 100)
	{
		C = C + 10;
		F = 9.0 / 5.0 * C + 32;


		printf("%d       %d\n", C, F);
	}
}