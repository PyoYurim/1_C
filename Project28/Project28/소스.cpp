#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {
	char a1[10], a2[10], a3[10], a4[10], a5[10], max[10];
	int b1, b2, b3, b4, b5;
	int length;

	scanf("%s %s %s %s %s", a1, a2, a3, a4, a5);
	
	b1 = strlen(a1);
	b2 = strlen(a2);
	b3 = strlen(a3);
	b4 = strlen(a4);
	b5 = strlen(a5);

	printf("문자열의 길이 : %d %d %d %d %d \n", b1, b2, b3, b4, b5);


	if (b1 > b2) {
		length = b1;
		strcpy(max, a1);
	}
	else {
		length = b2;
		strcpy(max, a2);
	}
	if (length < b3) {
		length = b3;
		strcpy(max, a3);
	}
	if (length < b4) {
		length = b4;
		strcpy(max, a4);
	}
	if (length < b5) {
		length = b5;
		strcpy(max, a5);
	}

	printf("가장 긴 문자열은 %s이다 \n", max);
}