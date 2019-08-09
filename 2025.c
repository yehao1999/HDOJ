#include <stdio.h>
void main()
{
	char str[101];
	while (gets_s(str, 100)) {
		short i = 0;
		char maxChar = str[0];
		while (str[i] != '\0') {
			if (str[i] > maxChar)
				maxChar = str[i];
			i++;
		}
		for (short j = 0; j < i; j++) {
			putchar(str[j]);
			if (str[j] == maxChar)
				printf("(max)");
		}
		putchar('\n');
	}
}