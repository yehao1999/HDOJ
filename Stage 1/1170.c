#include <stdio.h>
#include <stdlib.h>
void main()
{
	short t;
	while (~scanf("%hd", &t)) {
		short a, b;
		char c;
		while (t--) {
			getchar();
			scanf("%c%hd%hd", &c, &a, &b);
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
				(a % b == 0) ? printf("%d\n", a / b) : printf("%.2f\n", 1. * a / b);
				break;
			default:
				break;
			}
		}
	}
	system("pause");
}