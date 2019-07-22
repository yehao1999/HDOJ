#include <stdio.h>
#include <math.h>
void p2009()
{
    float sum, tmp;
    int times;
    while (scanf("%f %d", &tmp, &times) != EOF) {
        sum = tmp;
        for (short i = 1; i < times; i++) {
            tmp = sqrt(tmp);
            sum += tmp;
        }
        printf("%.2f\n", sum);
    }
}