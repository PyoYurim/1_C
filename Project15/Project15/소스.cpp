#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int s;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &s);
	switch (s / 10) {
	case 10:
	case 9: printf("A����\n", s); break;
	case 8: printf("B����\n", s); break;
	case 7: printf("C����\n", s); break;
	case 6: printf("D����\n", s); break;
	default: printf("F����\n", s); break;
	}
}
