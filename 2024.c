#include <stdio.h>
#include <stdlib.h>
void main()
{
	short n;
	char str[51];
	while (~scanf("%hd", &n)) {
		for (short i = 0; i < n; i++) {
			gets_s(str, 51);
			short i = 0;
			while (str[i] != '\0') {
				if (!('0' <= str[i] && str[i] <= '9'
					|| 'a' <= str[i] && str[i] <= 'z'
					|| 'A' <= str[i] && str[i] <= 'Z'
					|| str[i] == '_')) {
					printf("no\n");
					break;
				}
				else if('0' <= str[0] && str[0] <= '9'){
					printf("no\n");
					break;
				}
				else if(str[i+1]=='\0'){
					printf("yes\n");
				}
				i++;
			}
		}
	}
}