#include <stdio.h>
void main()
{
	char c;
	putchar(getchar() - 32);
	while (~(c = getchar())) {
		if (c == ' ' || c == '\n') {
			putchar(c);
			if ((c = getchar()) != -1)
				putchar(c - 32);
		}
		else {
			putchar(c);
		}
	}
}