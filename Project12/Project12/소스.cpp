#include <stdio.h>
int main()
{
	int a, b, c, d, e, i;

	a = 3, b = 8, c = 9, d = 2, e = 4;

	i = ((a < b) ? a : b);
	i = ((i < c) ? i : c);
	i = ((i < d) ? i : d);
	i = ((i < e) ? i : e);

	printf("ÃÖ¼Ú°ª=%d", i);
	return 0;
}