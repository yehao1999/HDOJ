#include <stdio.h>
void p2010()
{
    short m, n;
    while (scanf("%d %d",&m,&n)!=EOF) {
        short ans[4] = { 0 }, idx = 0;
        for (short i = m; i <= n; i++) {
            int a, b, c;
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;
            if ((a*a*a + b * b*b + c * c*c) == i) {
                ans[idx++] = i;
            }
        }
        if (!idx) {
            printf("no\n");
        }
        else {
            for (short i = 0; i < idx - 1; i++) {
                printf("%d ", ans[i]);
            }
            printf("%d\n", ans[idx-1]);
        }
    }
}