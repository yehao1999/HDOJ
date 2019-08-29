//trim函数参考了用户@humveea6，字符串长度参考了用户@一路二到底	
#include <stdio.h>
#include <string.h>
void trim(char *s)
{
	short dot = -1, len = strlen(s);
	for (short i = 0; i < len; i++) {
		if (s[i] == '.') {
			dot = i;
			break;
		}
	}
	if (dot >= 0) {
		short i = len - 1;
		for (; i >= dot; i--) {
			if (s[i] == '0') {
				s[i] = '\0';
			} else {
				if (s[i]=='.') {
					s[i] = '\0';
				}
				break;
			}
		}
	}
}
void main()
{
	char a[12001], b[12001];
	while (scanf("%s %s", a, b) == 2) {
		trim(a);
		trim(b);
		strcmp(a, b) ? printf("NO\n") : printf("YES\n");
	}
}