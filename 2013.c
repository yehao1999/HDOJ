#include <stdio.h>
void main()
{
	short n;
	int s;
	while (~scanf("%hd", &n)) {
		s = 1;
		while (--n)
			s = 2 * s + 2;
		printf("%d\n", s);
	}
}