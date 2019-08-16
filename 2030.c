#include <stdio.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		getchar();
		char ch;
		while (n--) {
			short num = 0;
			while ((ch = getchar()) != '\n')
				if (ch < 0)
					num++;
			printf("%hd\n", num / 2);
		}
	}
}