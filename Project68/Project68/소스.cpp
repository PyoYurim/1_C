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
	// 이진 파일을 쓰기 모드로 연다.
	if ((fp = fopen("student.dat", "wb")) == NULL) {
		fprintf(stderr, "출력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}
	// 배열을 이진 파일에 쓰기한다.
	fwrite(table, sizeof(struct student), SIZE, fp);
}