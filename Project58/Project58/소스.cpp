#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double height;
	struct student* next;
};

int main(void) {
	struct student s1 = { 30, "Kim", 167.2, NULL };
	struct student s2 = { 31, "Park", 179.1, NULL };
	struct student s3 = { 32, "Jun", 177.2, NULL };
	struct student s4 = { 33, "Lee", 169.1, NULL };
	struct student s5 = { 34, "Na", 180.1, NULL };
	struct student* first = NULL;
	struct student* current = NULL;

	first = &s1;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	s4.next = &s5;
	s5.next = NULL;
	
	current = first;
	while (current != NULL) {
		printf("학 생 의 번호 = %d 이름 = %s, 키 = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
	
	struct student s6 = { 35, "Jeon", 183.2, NULL };
	
	first = &s1;
	s1.next = &s6;
	s6.next = &s2;
	
	current = first;
	printf("\nS1과 S2 노드 사이에 S6노드를 삽입하고 출력 \n");
	
	while (current != NULL) {
		printf("학생의 번호 = %d 이름 = %s, 키 = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
	
	first = &s1;
	s3.next = &s5;
	
	printf("\nS4 노드를 삭제한 후 출력\n");
	
	current = first;
	while (current != NULL) {
		printf("학생의 번호 = %d 이름 = %s, 키 = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
}