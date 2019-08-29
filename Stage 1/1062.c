#include <stdio.h>
#include <string.h>
void p1062()
{
    char ch[1000] = {0};
    short t;
    scanf("%hd", &t);
    getchar();
    while (t--) {
        gets_s(ch, 1000);
        char tmp;
        short L = 0;
        for (short R = 0; R <= strlen(ch); R++) {
            if (ch[R] == ' ' || ch[R] == '\0') {
                for (short i = 0; i < (R - L) / 2; i++) {
                    tmp = ch[L + i];
                    ch[L + i] = ch[R - 1 - i];
                    ch[R - 1 - i] = tmp;
                }
                L = R + 1;
            }
        }
        puts(ch);
    }
}
