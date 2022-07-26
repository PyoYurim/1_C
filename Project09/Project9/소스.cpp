#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i;
	char a, b, c;
	printf("Enter 학번 :");
	scanf("%d", &i);
	printf("Enter 이름 :");
	scanf("%c%c%c", &a, &b, &c);
	printf("학번 :%d\n 이름 :%c%c%c", i, a, b, c);
}
