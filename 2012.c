#include <stdio.h>
short isPrime(short l, short r)
{
	short n;
	for (short i = l; i <= r; i++) {
		n = i * i + i + 41;
		for (short j = 2; j * j <= n; j++) {
			if (n % j == 0) return 0;
		}
	}
	return 1;
}
void main()
{
	short a, b;
	while (~scanf("%hd%hd", &a, &b) && !(a == 0 && b == 0)) {
		if (isPrime(a,b) == 0) puts("Sorry");
		else puts("OK");
	}
}