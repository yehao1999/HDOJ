#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	int x;
	while (~scanf("%hd%d", &n, &x) && n != 0) {
		int* a;
		short i;
		a = (int*)calloc(n, sizeof(int));
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			if (a[i] <= x) {
				printf("%d ", a[i]);
			}
			else {
				break;
			}
		}
		for (printf("%d", x); i < n; i++) {
			printf(" %d", a[i]);
		}
		printf("\n");
	}
}