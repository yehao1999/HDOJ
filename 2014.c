#include <stdio.h>
void main()
{
	short n;
	while (~scanf("%hd", &n)) {
		int s, sum, max, min;
		sum = max = 0;
		min = 100;
		for (short i = 0; i < n; i++) {
			scanf("%d", &s);
			if (max < s) max = s;
			if (min > s) min = s;
			sum += s;
		}
		printf("%.2f\n", 1.0 * (sum - max - min) / (n - 2));
	}
}