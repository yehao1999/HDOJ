#include <stdio.h>
void main()
{
	short n, m;
	while (~scanf("%hd%hd", &n, &m)) {
		for (short i = 1; i <= n; i += m) {
			(i + m) <= n ? printf("%d ", 2 * i + m - 1) : printf("%d\n", i + n);
		}
	}
}