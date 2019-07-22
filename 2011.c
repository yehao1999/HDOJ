#include <stdio.h>
void p2011()
{
    short m;
    while (scanf("%hd", &m) != EOF) {
        for (short i = 0; i < m; i++) {
            double sum = 1.0;
            short n;
            scanf("%hd", &n);
            for (short j = 2; j <= n; j++) {
                (j % 2) ? (sum += 1.0 / j) : (sum -= 1.0 / j);
            }
            printf("%.2f\n", sum);
        }
    }
}