#include <stdio.h>

void main()
{
	short t;
	while (!scanf("%d", &t)) {
		short a, b;
		char c;
		while (t--) {
			scanf("%c%d%d", &c, &a, &b);
			switch (c) {
			case '+':
				printf("%d\n", a + b);
				break;
			case '-':
				printf("%d\n", a - b);
				break;
			case '*':
				printf("%d\n", a * b);
				break;
			case '/':
				a% b == 0 ? printf("%d\n", a / b) : printf("%.2f\n", a / b);
				break;
			default:
				break;
			}
		}
	}
}