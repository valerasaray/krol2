// Сложность алгоритма O(n^2), где n - колво строк матрицы в файле
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main(int argc, char const *argv[])
{
	FILE *file = fopen(argv[1], "rb");
	int len = 0, c;
	while(fscanf(file, "%d", &c) == 1) {
		len++;
	}
	fseek(file, 0, SEEK_SET);
	len = (int)sqrt(len);
	int matrix[len][len];
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			fscanf(file, "%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}
	return 0;
}
