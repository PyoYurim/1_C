#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
struct student {
	int number;
	char name[20];
	double height;
};
int main(void)
{
	struct student list[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf", &list[i].height);
	}
	for (i = 0; i < 3; i++)
		printf("�й�: %d, �̸�:%s, ����:%f\n", list[i].number, list[i].name, list[i].height);
		return 0;
}