#include <stdio.h>
#define SIZE 3
struct student {
	int number;
	char name[20];
	double gpa;
};
int main(void) {
	struct student table[SIZE] = {
		{1, "Kim", 3.99},
		{2, "Min", 2.68},
		{3, "Lee", 4.01}
	};
	struct student S;
	FILE* fp = NULL;
	int i;
	// ���� ������ ���� ���� ����.
	if ((fp = fopen("student.dat", "wb")) == NULL) {
		fprintf(stderr, "����� ���� ������ �� �� �����ϴ�.\n");
		exit(1);
	}
	// �迭�� ���� ���Ͽ� �����Ѵ�.
	fwrite(table, sizeof(struct student), SIZE, fp);
}