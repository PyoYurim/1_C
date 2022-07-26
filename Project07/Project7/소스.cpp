//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i;
	char c1, c2, c3;
	printf("학번 :");
	scanf_s("%d", &i);
	printf("이름 :");
	scanf_s("%c%c%c", '&c1', '&c2', '&c3');
}
