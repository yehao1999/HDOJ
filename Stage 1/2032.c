#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		int **layer = (int **)calloc(n, sizeof(int *));
		for (short i = 0; i < n; i++) {
			layer[i] = (int *)calloc(i + 1, sizeof(int));
			layer[i][0] = layer[i][i] = 1;
		}
		for (short i = 2; i < n; i++)
			for (short j = 1; j < i; j++)
				layer[i][j] = layer[i - 1][j - 1] + layer[i - 1][j];
		for (short i = 0; i < n; i++) {
			for (short j = 0; j <= i; j++) {
				if (j == i)
					printf("%d\n", layer[i][j]);
				else
					printf("%d ", layer[i][j]);
			}
		}
		printf("\n");
	}
}