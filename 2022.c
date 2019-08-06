#include <stdio.h>
#include <stdlib.h>
void main()
{
	short m, n;
	while (~scanf("%hd%hd",&m,&n)) {
		short x, y;
		int max = 0, a;
		for (short i=0; i < m; i++) {
			for (short j = 0; j < n; j++) {
				scanf("%d", &a);
				if (abs(a)>abs(max)) {
					x = i + 1;
					y = j + 1;
					max = a;
				}
			}
		}
		printf("%d %d %d\n", x, y, max);
	}
}