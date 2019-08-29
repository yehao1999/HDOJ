#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n, m;
	while (~scanf("%hd%hd", &n, &m)) {
		int** s;
		double r, * k;
		short cnt = 0;
		s = (int**)calloc(n, sizeof(int*));
		k = (double*)calloc(m, sizeof(double));
		for (short i = 0; i < n; i++)
			s[i] = (int*)calloc(m, sizeof(int));
		for (short i = 0; i < m; i++)
			k[i] = 0;
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				scanf("%d", &s[i][j]);
				k[j] += s[i][j];
			}
		}
		for (short i = 0; i < n; i++) {
			r = 0;
			for (short j = 0; j < m; j++)
				r += s[i][j];
			if (i == n - 1)
				printf("%.2lf\n", r / m);
			else
				printf("%.2lf ", r / m);
		}
		for (short i = 0; i < m - 1; i++) {
			k[i] /= n;
			printf("%.2lf ", k[i]);
		}
		k[m - 1] /= n;
		printf("%.2lf\n", k[m - 1]);
		for (short i = 0; i < n; i++) {
			for (short j = 0; j < m; j++) {
				if (s[i][j] < k[j])
					break;
				else if (j == m - 1)
					cnt++;
			}
		}
		printf("%hd\n\n", cnt);
		free(k);
		for (short i = 0; i < n; i++)
			free(s[i]);
		free(s);
	}
}