#include <stdio.h>
void main()
{
	short t;
	while (~scanf("%hd", &t)) {
		while (t--) {
			char x;
			int y;
			getchar();
			scanf("%c%d", &x, &y);
			y += x > 'Z' ? -(x - 'a' + 1) : (x - 'A' + 1);
			printf("%d\n", y);
		}
	}
}