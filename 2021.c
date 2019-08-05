#include <stdio.h>
#include <stdlib.h>
int f(int a)
{
	int n = 0;
	short e[6] = { 100,50,10,5,2,1 };
	for (short i = 0; i < 6; i++) {
		for (; a >= e[i]; n++) {
			a -= e[i];
		}
	}
	return n;
}
void main()
{
	short n;
	while (~scanf("%hd", &n) && n != 0) {
		int a, s = 0;
		for (short i = 0; i < n; i++) {
			scanf("%d", &a);
			s += f(a);
		}
		printf("%d\n", s);
	}
}