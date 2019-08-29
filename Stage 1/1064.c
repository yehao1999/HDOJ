#include <stdio.h>
void p1064()
{
    float tmp, sum = 0;
    for (short i = 0; i < 12; i++) {
        scanf("%f", &tmp);
        sum += tmp;
    }
    printf("$%.2f\n", sum / 12);
}