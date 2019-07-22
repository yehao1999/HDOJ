#include <stdio.h>
void p1720()
{
    int a, b;
    while (~scanf("%x %x", &a, &b)) {
        printf("%d\n", a + b);
    }
}