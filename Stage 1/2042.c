#include <stdio.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		while (n--) {
			short a;
			int num = 3;
			for (scanf("%hd", &a); a > 0; a--)
				num = (num - 1) * 2;
			printf("%d\n", num);
		}
	}
}