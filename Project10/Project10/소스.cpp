#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i;
	char addr[10];
	printf("Enter 학번 :");
	scanf("%d", &i);
	printf("Enter 이름 :");
	scanf("%s", addr);
	printf("\n학번 :%d", i);
	printf("\n이름 :%s", addr);
}