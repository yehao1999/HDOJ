#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	while (~scanf("%hd", &n) && n != 0) {
		int* p;
		int min = 0x7fffffff;
		short idx;
		p = (int*)calloc(n, 4);
		p[0] = 0;
		for (short i = 0; i < n; i++) {
			scanf("%d", &p[i]);
			if (p[i] < min) {
				min = p[i];
				idx = i;
			}
		}
		p[idx] = p[0];
		p[0] = min;
		for (short i = 0; i < n - 1; i++) {
			printf("%d ", p[i]);
		}
		printf("%d\n", p[n - 1]);
		free(p);
	}
}