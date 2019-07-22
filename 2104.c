#include <stdio.h>
void p2104()
{
    int n, m;
    while (~scanf("%d %d",&m,&n)) {
        if (m == -1 && n == -1) {
            break;
        }
        int r;
        while (n != 0 && n != 1) {
            r = m % n;
            m = n;
            n = r;
        }
        printf(n ? "YES\n" : "POOR Haha\n");
    }
}