#include <stdio.h>
void main()
{
	short n;
	while (~scanf("%hd", &n) && n != 0) {
		short a = 1, b1, b2, b3;
		b1 = b2 = b3 = 0;
		for (short i = 1; i < n; i++) {
			a += b3;
			b3 = b2;
			b2 = b1;
			b1 = a;
		}
		printf("%d\n", a + b1 + b2 + b3);
	}
}