#include <stdio.h>
void main() {
	char *a[] = {"Seoul", "Gangwondo", "Jejudo"};
int i, j;
printf("***** result *****\n\n");
for (i = 0; i < 3; i++)
	printf("%s\n", a[i]);
printf("\n");
for (i = 0; i < 3; i++) {
	for (j = 0; *(*(a + i)+j) != '\0'; j++)
		printf("%c", *(*(a + i) + j));
	printf("\n");
	}
}