#include <stdio.h>
void main()
{
	short n;
	scanf("%hd", &n);
	getchar();
	while (n--) {
		char c;
		short d = 0;
		while ((c = getchar()) != '\n') {
			if ('0' <= c && c <= '9') {
				d++;
			}
		}
		printf("%d\n", d);
	}
}