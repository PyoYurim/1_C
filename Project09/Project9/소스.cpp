#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i;
	char a, b, c;
	printf("Enter �й� :");
	scanf("%d", &i);
	printf("Enter �̸� :");
	scanf("%c%c%c", &a, &b, &c);
	printf("�й� :%d\n �̸� :%c%c%c", i, a, b, c);
}
