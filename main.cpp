#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mas[100][100];
	int str, col;
	int i, j;
	printf("Сколько хотим строк?\nХочу==>");
	scanf("%d",&str);
	printf("А столбцов?\nХочу==>");
	scanf("%d",&col);
	srand(time(NULL));

	for (i = 0; i < str; i++)
		for (j = 0; j < col; j++)
			mas[i][j] = rand() % 10+( - 2);

	for (i = 0; i < str; i++) {
		for (j = 0; j < col; j++)
			printf("%3d ", mas[i][j]);
		printf("\n");
	}
	return 0;
}
