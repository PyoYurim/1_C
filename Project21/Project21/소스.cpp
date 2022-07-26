#include <stdio.h>
int i = 10;
int j = 20;
void sub();
void main()
{
	extern int k;
	int j = 200;
	printf("i=%d, j=%d, k=%d\n", i, j, k); //ич
	sub();
	k += 5;
	printf("main : K=%d\n", k); //ищ
}

#include <stdio.h>
int k = 50;
void sub()
{
	k = k + 10;
	printf("sub : k=%d\n", k); //иш
}