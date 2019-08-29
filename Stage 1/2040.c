#include <stdio.h>
short fun(int a, int b)
{
	int sum = 1;
	for (int i = 2; i * i < a; i++)
		if (a % i == 0)
			sum += i + a / i;
	if (sum == b)
		return 1;
	else
		return 0;
}
void main()
{
	short m;
	while (~scanf("%hd", &m)) {
		int a, b;
		while (m--) {
			scanf("%d%d", &a, &b);
			if (fun(a, b) && fun(b, a))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}