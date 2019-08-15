#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		getchar();
		char s[101];
		while (n--) {
			gets_s(s, 100);
			short length = strlen(s);
			for (short i = 0; i < length / 2; i++) {
				if (s[i] != s[length - 1 - i]) {
					printf("no\n");
					break;
				} else if (i == length / 2 - 1) {
					printf("yes\n");
				}
			}
		}
	}
}