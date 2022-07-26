#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int s;
	printf("점수를 입력하시오 : ");
	scanf("%d", &s);
	switch (s / 10) {
	case 10:
	case 9: printf("A학점\n", s); break;
	case 8: printf("B학점\n", s); break;
	case 7: printf("C학점\n", s); break;
	case 6: printf("D학점\n", s); break;
	default: printf("F학점\n", s); break;
	}
}
