#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct movie {
	char title[100];
	double rating;
} MOVIE;
int main(void) {
	MOVIE* movies;
	int size, i;
	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &size);
	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	if (movies == NULL) {
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	for (i = 0; i < size; i++) {
		printf("��ȭ����\n");
		fflush(stdin);
		gets_s(movies[i].title);
		printf("��ȭ ����");
		scanf("%lf", &(movies[i].rating));
	}
	printf("========================\n");
	printf("���� \t \t ���� \n");
	printf("========================\n");
	for (i = 0; i < size; i++)
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	free(movies);
	return 0;
}




