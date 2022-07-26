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
	printf("몇 편이나 저장하시겠습니까? ");
	scanf("%d", &size);
	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	if (movies == NULL) {
		printf("동적 메모리 할당 오류");
		exit(1);
	}
	for (i = 0; i < size; i++) {
		printf("영화제목\n");
		fflush(stdin);
		gets_s(movies[i].title);
		printf("영화 평점");
		scanf("%lf", &(movies[i].rating));
	}
	printf("========================\n");
	printf("제목 \t \t 평점 \n");
	printf("========================\n");
	for (i = 0; i < size; i++)
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	free(movies);
	return 0;
}




