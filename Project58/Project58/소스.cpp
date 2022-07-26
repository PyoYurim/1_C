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
		printf("�� �� �� ��ȣ = %d �̸� = %s, Ű = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
	
	struct student s6 = { 35, "Jeon", 183.2, NULL };
	
	first = &s1;
	s1.next = &s6;
	s6.next = &s2;
	
	current = first;
	printf("\nS1�� S2 ��� ���̿� S6��带 �����ϰ� ��� \n");
	
	while (current != NULL) {
		printf("�л��� ��ȣ = %d �̸� = %s, Ű = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
	
	first = &s1;
	s3.next = &s5;
	
	printf("\nS4 ��带 ������ �� ���\n");
	
	current = first;
	while (current != NULL) {
		printf("�л��� ��ȣ = %d �̸� = %s, Ű = %f\n",
			current->number, current->name, current->height);
		current = current->next;
	}
}