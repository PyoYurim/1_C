#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i; 
	char addr[10];
	printf("Enter �й� :");
	scanf_s("%d", &i);
    printf("Enter �̸� :");
	scanf_s("%s", addr);
	printf("\n�й�:%d", i);
	printf("\n�̸� :%s", addr);
}