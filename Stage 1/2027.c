#include <stdio.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		getchar();
		while (n--) {
			short num[5] = { 0 };
			char c;
			while ((c = getchar()) != '\n') {
				if (c == 'a')
					num[0]++;
				else if (c == 'e')
					num[1]++;
				else if (c == 'i')
					num[2]++;
				else if (c == 'o')
					num[3]++;
				else if (c == 'u')
					num[4]++;
			}
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", num[0], num[1], num[2], num[3], num[4]);
			if (n != 0)
				putchar('\n');
		}
	}
}