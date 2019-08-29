#include <stdio.h>
void p2039()
{
    int m;
    while (~scanf("%d", &m)) {
        double a, b, c;
        for (short i = 0; i < m; i++) {
            scanf("%lf %lf %lf", &a, &b, &c);
            printf((a + b > c) && (a + c > b) && (b + c > a) ? "YES\n" : "NO\n");
        }
    }
}