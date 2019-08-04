#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	while (~scanf("%hd", &n) && n != 0) {
		int* a;
		a = (int*)calloc(n, sizeof(int));
		for (short i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (short i = 0; i < n; i++) {
			for (short j = i + 1; j < n; j++) {
				if (abs(a[i]) > abs(a[j])) {
					continue;
				}
				else {
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		for (short i = 0; i < n - 1; i++) {
			printf("%d ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}