#include <stdio.h>
void Display(char (*x)[10], int y, const char *msg) {
	puts(msg);
	for (int i=0; i<y; i++) {
		printf("dept[%d] ==> %s\n", i, *(x + i));
	}
}
int main() {
	char dept[5][10] = { "�İ�", "���", "����", "����", "����" };
	int i, n = sizeof(dept) / sizeof(char[10]);
	puts("<�迭 �������� ��� ��>");
	printf("\n %d���� �а�", n);
	Display(dept, n, "*�Լ����� ���*");
	return 0;
}