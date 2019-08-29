#include <stdio.h>
void p2008()
{
    int num;
    while (scanf("%d", &num) && num != 0) {
        int positive = 0, negtive = 0, tmp;
        for (int i = 0; i < num; i++) {
            scanf("%f", &tmp);
            if (tmp > 0) {
                positive++;
            }
            else if (tmp < 0) {
                negtive++;
            }
        }
        printf("%d %d %d\n", negtive, num-negtive-positive, positive);
    }
}